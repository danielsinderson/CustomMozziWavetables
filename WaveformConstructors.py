import math
#from matplotlib import pyplot as plt
from MozziWavetableConstructor import constructor

def sinewaveTable(tableSize, freq, amplitude):
    array = []
    factor = amplitude*127
    omega = 2*math.pi
    for x in range(tableSize):
        y = (x/tableSize)*freq
        value = round(factor * math.sin(y*omega))
        array.append(value)
    return array

def mapToRange(a):
    minimum = min(a)
    maximum = max(a)
    factor = 255/(maximum-minimum)
    new_array = []
    for x in a:
        new_array.append(round(x*factor))
    return new_array


def harmonicSeriesTable(f, o, n, fundamental):
    if fundamental == True:
        start = 0
        nameEnd = ""
    else:
        start = 1
        nameEnd = "harmonics"
    waves = []
    for i in range(start, n):
        waves.append(sinewaveTable(256, (f * i) + o, (1 / ((f * i) + o))))

    wf = [0 for i in range(256)]
    for i in range(256):
        for wave in waves:
            wf[i] += wave[i]

    wf = mapToRange(wf)
    w = [x for x in wf]

    print(w)
    #plt.plot(w)
    #plt.title(f"{str(f)}n{str(o)}")
    #plt.show()

    constructor(w, f"z{str(f)}n{str(o)}_{nameEnd}")



# ---------------------------------------------------------------

done = []
offsets = [1]
for x in range(1, 7):
    for y in offsets:
        ratio = x/y
        if ratio in done: continue
        done.append(ratio)
        harmonicSeriesTable(x, y, 7, True)
