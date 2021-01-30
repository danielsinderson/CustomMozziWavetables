#ifndef Z4N5_256_INT8_H_
#define Z4N5_256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z4N5_256_NUM_CELLS 256
#define Z4N5_256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z4N5_256_DATA []  =
        { 0, 37, 40, 36, 33, 35, 31, 30, 30, 27, 24, 23, 18, 23, 20, 14, 12, 13, 10, 7, 7, 1, 4, 3, 2, -3, 2, -3, -4, -7, -7, -10, -9, -10, -12, -11, -12, -16, -14, -17, -14, -13, -16, -20, -14, -18, -20, -17, -14, -12, -11, -15, -12, -8, -5, -1, -1, 2, 8, 9, 17, 23, 35, 50, 128, 50, 35, 23, 17, 9, 8, 2, -1, -1, -5, -8, -12, -15, -11, -12, -14, -17, -20, -18, -14, -20, -16, -13, -14, -17, -14, -16, -12, -11, -12, -10, -9, -10, -7, -7, -4, -3, 2, -3, 2, 3, 4, 1, 7, 7, 10, 13, 12, 14, 20, 23, 18, 23, 24, 27, 30, 30, 31, 35, 33, 36, 40, 37, 0, -37, -40, -36, -33, -35, -31, -30, -30, -27, -24, -23, -18, -23, -20, -14, -12, -13, -10, -7, -7, -1, -4, -3, -2, 3, -2, 3, 4, 7, 7, 10, 9, 10, 12, 11, 12, 16, 14, 17, 14, 13, 16, 20, 14, 18, 20, 17, 14, 12, 11, 15, 12, 8, 5, 1, 1, -2, -8, -9, -17, -23, -35, -50, -128, -50, -35, -23, -17, -9, -8, -2, 1, 1, 5, 8, 12, 15, 11, 12, 14, 17, 20, 18, 14, 20, 16, 13, 14, 17, 14, 16, 12, 11, 12, 10, 9, 10, 7, 7, 4, 3, -2, 3, -2, -3, -4, -1, -7, -7, -10, -13, -12, -14, -20, -23, -18, -23, -24, -27, -30, -30, -31, -35, -33, -36, -40, -37 };

#endif	/* Z4N5_256_INT8_H_ */"