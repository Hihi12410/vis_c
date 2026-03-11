/* Braille Header */
#pragma once
#ifndef BRAILLE_LIB
#define BRAILLE_LIB 1

#include "../bit_lib/bit_lib.h"

/* Constants... */

/* Start offset */
#define BRAILLE_START_OFFSET 0xAF0

/* Buffer sizing */
#define BUFF_X_SZ_PER_CELL 2
#define BUFF_Y_SZ_PER_CELL 1

#define SZ_X_TO_CELL_SZ( x ) ( BUFF_X_SZ_PER_CELL * ( x ) )
#define SZ_Y_TO_CELL_SZ( y ) ( BUFF_Y_SZ_PER_CELL * ( y ) )

/* Helper for UTF8 sizing (pessimistic size) */
#define UTF8_SZ_PESSIMISTIC 4
#define UTF8_SZ( x ) ( UTF8_SZ_PESSIMISTIC * ( x ) )

/* 
 * --- Linking ---
 *   _   _
 *  |A| |B|
 *   ¯   ¯
 *   _   _
 *  |C| |D|
 *   ¯   ¯      ---\    {A, B, C, D, E, F, G, H}
 *   _   _      ---/    
 *  |E| |F|
 *   ¯   ¯
 *   _   _
 *  |G| |H|
 *   ¯   ¯
*/

/* --- The linking process ---
 * char_8 framebuffer, topleft scanline wrap -> wrap out into braille cells -> offset and print
*/


/* Solve table (scanline wind up) */
#define BRAILLE_SOLVE_TABLE { 0x1, 0x8, 0x2, 0x10, 0x4, 0x20, 0x40, 0x80 }

/* The Braille character */
/* Packed for easy cross-linking with a frame buffer */

typedef struct
{
    char values[ 8 ];

} braille_scanned;

/* Map a framebuffer to braille */
/* Limiting buffer size to 256x256 (max. screen res is 40x40 anyway) */
braille_scanned ** map_braille_to_fb( char * fb, unsigned char len_x, unsigned char len_y );

#endif
