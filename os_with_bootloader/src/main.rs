use std::process::{Command, Child};

fn main() {
    // Read environment variables that were set in the build script
    let uefi_path: &str = env!("UEFI_PATH");
    let bios_path: &str = env!("BIOS_PATH");

    // Choose whether to start the UEFI or BIOS image
    let uefi: bool = false;

    // Create a Command to execute the QEMU process
    let mut cmd: Command = std::process::Command::new("qemu-system-x86_64");


    if uefi {
        // Use the OVMF pure UEFI firmware
        cmd.arg("-bios").arg(ovmf_prebuilt::ovmf_pure_efi());
        cmd.arg("-drive").arg(format!("format=raw,file={uefi_path}"));
    } else {
        // Use the BIOS and pass drive options
        cmd.arg("-drive").arg(format!("format=raw,file={bios_path}"));
    }

    // Spawn the process and wait for it to complete
    let mut child: Child = cmd.spawn().unwrap();
    child.wait().unwrap();
}

