

def constructor(wavetable, name):
    l = len(wavetable)
    textarray = str(wavetable)[1:-1]
    print(textarray)
    string = f'#ifndef {name.upper()}{l}_INT8_H_\n#define {name.upper()}{l}_INT8_H_\n\n#if ARDUINO >= 100\n #include "Arduino.h"\n#else\n #include "WProgram.h"\n#endif\n#include "mozzi_pgmspace.h"\n\n#define {name.upper()}{l}_NUM_CELLS {l}\n#define {name.upper()}{l}_SAMPLERATE {l}\n\nCONSTTABLE_STORAGE(int8_t) {name.upper()}{l}_DATA []  =\n        {{ {textarray} }};\n\n#endif	/* {name.upper()}{l}_INT8_H_ */"'
    fullname = f"{name}{l}_int8.h"

    MozziTable = open(fullname, 'w')
    MozziTable.write(string)
    MozziTable.close()

    return string

