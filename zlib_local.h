//
// Shim to use either miniz.* or libz.
//

#ifndef ZLIB_LOCAL_H
#define ZLIB_LOCAL_H

#ifdef ZIP_USE_MINIZ

    #include "miniz.h"

    #define ZEXPORT
    #define OF(args)  args
    #define z_off_t long

    typedef unsigned long z_crc_t;

    #define Z_BINARY   0
    #define Z_TEXT     1
    #define Z_ASCII    Z_TEXT   /* for compatibility with 1.2.2 and earlier */
    #define Z_UNKNOWN  2

    const z_crc_t * ZEXPORT get_crc_table    OF((void));

#else
    #include "zlib.h"
#endif

#endif
