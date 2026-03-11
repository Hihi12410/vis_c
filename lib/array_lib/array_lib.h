/* Lib for arrays */
#ifndef ARRAY_LIB
#define ARRAY_LIB

/* Relies on bit_lib/bit_lib.h (no import) */
#include "../bit_lib/bit_lib.h" /* Testing. */


/* --- Bitlist ---
 * Stores data in bits.
 * Is a packed boolean array.
*/

#define BITLIST ( unsigned char )

/* Make a bitlist. */
#define BITLIST_INIT( guid, n ) BITLIST ##guid[ ( ( n ) / 8u ) + (( ( n ) % 8u > 0 ) ? 1 : 0 ) ]

/* Read */
#define BITLIST_READ_ELEMENT( guid, x ) GET_BIT( ##guid[ ( x ) / 8u ] , ( x ) % 8u )

/* Write */
#define BITLIST_WRITE_ELEMENT( guid, x, v ) BITLIST_WRITE_##v( ( guid ) , ( v ) )
#define BITLIST_WRITE_0( guid, x ) DISABLE_BIT( ##guid[ ( x ) / 8u ] , ( x ) % 8u )
#define BITLIST_WRITE_1( guid, x ) ENABLE_BIT( ##guid[ ( x ) / 8u ] , ( x ) % 8u )


#endif
