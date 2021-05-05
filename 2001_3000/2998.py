binary=[*map(int, input()[::-1])]
decimal=0
octnum=''
for i in range(len(binary)):
    decimal += binary[i]*2**i

while decimal>8:
    octnum = octnum + str(decimal%8)
    decimal = decimal//8

if decimal!=0:
    octnum += str(decimal)

print(octnum[::-1])