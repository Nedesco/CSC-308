#![no_std]
#![no_main]

use bootloader_api::{entry_point, BootInfo};
use spin::mutex::Mutex;
use x86_64::instructions::hlt;
use core::panic::PanicInfo;
use crate::macros::WRITER;
use lazy_static::lazy_static;
#[macro_use] // Brings macros from macros.rs into scope
mod macros; // Import macros module
mod writer; // Import writer module for FrameBufferWriter
use writer::FrameBufferWriter;

#[panic_handler]
fn panic_handler(_info: &PanicInfo) -> ! {
    loop {
        hlt();
    }
}
fn kernel_main(boot_info: &'static mut BootInfo) -> ! {
    if let Some(framebuffer) = boot_info.framebuffer.as_mut() {
        let frame_buffer_info = framebuffer.info();
        let buffer = framebuffer.buffer_mut();

        *WRITER.lock() = Some(FrameBufferWriter::new(buffer, frame_buffer_info));

        // Debugging: Print framebuffer details
        println!(
            "Framebuffer: {}x{}, format: {:?}",
            frame_buffer_info.width, frame_buffer_info.height, frame_buffer_info.pixel_format
        );

        // Example text output
        print!("\tHello, Rust OS!");
        print!("Overflow \x16test: line 1");
        print!("Another line to check overflow. This should wrap.");
    } else {
        loop {
            hlt();
        }
    }

    loop {
        hlt();
    }
}


entry_point!(kernel_main);
