/* Static bit manipulation lib!!! */

#pragma once
#ifndef BIT_LIB
#define BIT_LIB 1

/* Get bit from byte */
#define GET_BIT( x, n ) (( unsigned char )((( x ) >> ( n )) & 1u ))

/* I love LUT's */
#define LUT_BITMASK_0 (( unsigned char) 0b00000001 )
#define LUT_BITMASK_1 (( unsigned char) 0b00000010 )
#define LUT_BITMASK_2 (( unsigned char) 0b00000100 )
#define LUT_BITMASK_3 (( unsigned char) 0b00001000 )
#define LUT_BITMASK_4 (( unsigned char) 0b00010000 )
#define LUT_BITMASK_5 (( unsigned char) 0b00100000 )
#define LUT_BITMASK_6 (( unsigned char) 0b01000000 )
#define LUT_BITMASK_7 (( unsigned char) 0b10000000 )

#define LUT_BITMASK_I( n ) (( unsigned char ) 1u) << (( unsigned char ) ( n ) )

/* Set bit in byte */
#define ENABLE_BIT( x, i ) ( ( LUT_BITMASK_I( i ) ) | ( x ))
#define DISABLE_BIT( x, i ) (( x ) & ~( LUT_BITMASK_I( i ) ) )
#define ENABLE_BIT_IN_PLACE( x, n )  (( x ) = ENABLE_BIT( ( x ), ( n ) ))
#define DISABLE_BIT_IN_PLACE( x, n ) (( x ) = DISABLE_BIT( ( x ), ( n ) ))

#endif
