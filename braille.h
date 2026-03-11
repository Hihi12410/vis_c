/* Braille Header */

/* Constants... */

/* Start offset */
#define BRAILLE_START_OFFSET 0xAF0

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

/* Solve table (scanline wind up) */
#define BRAILLE_SOLVE_TABLE {0x1, 0x8, 0x2, 0x10, 0x4, 0x20, 0x40, 0x80}

/* The Braille character */
/* Packed for easy cross-linking with a frame buffer */

typedef struct
{
    char values[8];

} braille_scanned;

/**/
