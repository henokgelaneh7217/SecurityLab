import math
  
h1 = "e271dc47fa80ddc9e6590042ad9ed2b7"
h2 = "d6faa9d72f50f06228f69674fec30017"

def hextobin(hexnum):
    res = "{0:08b}".format(int(hexnum, 16))
    print (hexnum + " in binary : "+ res)
    return str(res)

def counter(file1,file2):
    diff = 0
    fl1 = hextobin(file1)
    fl2 = hextobin(file2)
    loop = len(fl1)
    for i in range(loop):
        if fl1[i] != fl2[i]:
            diff = diff + 1
    print ("Difference is: " + str(diff))


counter(h1,h2)
