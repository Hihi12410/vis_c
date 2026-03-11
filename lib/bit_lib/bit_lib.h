/* Static bit manipulation lib!!! */

#pragma once
#ifndef BIT_LIB
#define BIT_LIB 1

/* Get bit from byte */
#define GET_BIT( x, n ) (( unsigned char )((( x ) >> ( n )) & 1u ))

/* Set bit in byte */
#define ENABLE_BIT( x, n ) ((( 1u ) << ( n )) | ( x ))
#define DISABLE_BIT( x, n ) (( x ) & ~ ( 1u << ( n ) ))
#define ENABLE_BIT_IN_PLACE( x, n )  (( x ) = ENABLE_BIT( ( x ), ( n ) ))
#define DISABLE_BIT_IN_PLACE( x, n ) (( x ) = DISABLE_BIT( ( x ), ( n ) ))

#endif
