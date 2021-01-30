#ifndef Z1N1_256_INT8_H_
#define Z1N1_256_INT8_H_

#if ARDUINO >= 100
 #include "Arduino.h"
#else
 #include "WProgram.h"
#endif
#include "mozzi_pgmspace.h"

#define Z1N1_256_NUM_CELLS 256
#define Z1N1_256_SAMPLERATE 256

CONSTTABLE_STORAGE(int8_t) Z1N1_256_DATA []  =
        { 0, 128, 114, 106, 117, 108, 108, 109, 107, 111, 102, 107, 103, 102, 104, 99, 99, 101, 98, 98, 96, 94, 94, 91, 97, 91, 91, 92, 91, 91, 87, 87, 89, 85, 86, 86, 79, 78, 81, 81, 82, 77, 77, 76, 77, 71, 71, 71, 73, 69, 71, 63, 66, 66, 65, 64, 63, 61, 64, 62, 59, 60, 62, 57, 55, 56, 56, 55, 53, 53, 56, 51, 50, 56, 49, 47, 45, 46, 45, 45, 43, 39, 39, 39, 40, 38, 37, 36, 35, 34, 33, 33, 33, 33, 29, 32, 29, 27, 30, 27, 26, 21, 25, 24, 25, 22, 22, 19, 18, 16, 18, 17, 12, 13, 16, 12, 13, 11, 13, 7, 10, 9, 4, 5, 0, 3, 3, 1, 0, -1, -3, -3, 0, -5, -4, -9, -10, -7, -13, -11, -13, -12, -16, -13, -12, -17, -18, -16, -18, -19, -22, -22, -25, -24, -25, -21, -26, -27, -30, -27, -29, -32, -29, -33, -33, -33, -33, -34, -35, -36, -37, -38, -40, -39, -39, -39, -43, -45, -45, -46, -45, -47, -49, -56, -50, -51, -56, -53, -53, -55, -56, -56, -55, -57, -62, -60, -59, -62, -64, -61, -63, -64, -65, -66, -66, -63, -71, -69, -73, -71, -71, -71, -77, -76, -77, -77, -82, -81, -81, -78, -79, -86, -86, -85, -89, -87, -87, -91, -91, -92, -91, -91, -97, -91, -94, -94, -96, -98, -98, -101, -99, -99, -104, -102, -103, -107, -102, -111, -107, -109, -108, -108, -117, -106, -114, -128 };

#endif	/* Z1N1_256_INT8_H_ */"