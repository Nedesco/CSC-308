// use noto_sans_mono_bitmap::{FontWeight, RasterHeight, get_raster_width};

// pub mod font_constants {
//     use super::*;

//     pub const CHAR_RASTER_HEIGHT: RasterHeight = RasterHeight::Size16;
//     pub const CHAR_RASTER_WIDTH: usize = get_raster_width(FontWeight::Regular, CHAR_RASTER_HEIGHT);
//     pub const FONT_WEIGHT: FontWeight = FontWeight::Regular;

//     pub const LINE_SPACING: usize = 2;
//     pub const LETTER_SPACING: usize = 1;
//     pub const BORDER_PADDING: usize = 2;

//     pub const BACKSPACE: char = '\u{0008}';
//     pub const BACKUP_CHAR: char = ' ';
// }

use noto_sans_mono_bitmap::{ get_raster_width, FontWeight, RasterHeight};
/// Constants for the usage of the [`noto_sans_mono_bitmap`] crate. 
pub mod font_constants {
use super::*;
/// Height of each char raster. The font size is ~0.84% of this. Thus, this is the line height that
/// enables multiple characters to be side-by-side and appear optically in one line in a natural way.
pub const CHAR_RASTER_HEIGHT: RasterHeight = RasterHeight::Size16;
/// The width of each single symbol of the mono space font.
pub const CHAR_RASTER_WIDTH: usize = get_raster_width(FontWeight::Regular, CHAR_RASTER_HEIGHT);
/// Backup character if a desired symbol is not available by the font.
/// The '	' character requires the feature "unicode-specials".
pub const BACKUP_CHAR: char = '\t';
pub const FONT_WEIGHT: FontWeight = FontWeight::Regular; 
pub const BACKSPACE: char = '\u{0008}';
}

