/* Source file for braille support */
/* Please refer to header for additional info */

#include "braille.h"


/* TODO!!! */
braille_scanned ** map_braille_to_fb(char * fb, unsigned char len_x, unsigned char len_y) 
{
    unsigned char br_sz_x = len_x / 4 + (((len_x % 4) > 0) ? 1 : 0); /* Account for non-4 grid size. */
    unsigned char br_sz_y = len_y / 8 + (((len_y % 8) > 0) ? 1 : 0); /* Same here. */
}
