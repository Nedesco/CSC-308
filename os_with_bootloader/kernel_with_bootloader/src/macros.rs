use spin::Mutex;
use lazy_static::lazy_static;
use core::fmt::Write;
use crate::writer::FrameBufferWriter;

lazy_static! {
    pub static ref WRITER: Mutex<Option<FrameBufferWriter<'static>>> = Mutex::new(None);
}

macro_rules! print {
    ($($arg:tt)*) => {{
        use core::fmt::Write;
        let mut writer = WRITER.lock();
        if let Some(writer) = writer.as_mut() {
            let _ = write!(writer, $($arg)*);
        }
    }};
}

macro_rules! println {
    () => { print!("\n"); };
    ($($arg:tt)*) => {{
        use core::fmt::Write;
        let mut writer = WRITER.lock();
        if let Some(writer) = writer.as_mut() {
            let _ = writeln!(writer, $($arg)*);
        }
    }};
}
