import sys

def xor_file(f, a, b):
    size = len(f)
    ret = bytearray(size)
    for i in range(size):
        if i % 2 == 0:
            bytearray[i] = f[i] ^ a
        else:
            bytearray[i] = f[i] ^ b
    return ret

f = bytearray(open(sys.argv[1], 'rb').read())

for i in range(256):
    for j in range(256):
        open(sys.argv[2], 'wb').write(xor_file)
