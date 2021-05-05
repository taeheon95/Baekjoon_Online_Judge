import sys

A, B, V = map(int, sys.stdin.readline().rstrip().split())

# i = 1
# while V > 0:
#     V -= A
#     if V == 0:
#         break
#     else :
#         V+=B
#         i+=1

V -= A
if V % (A-B) == 0 :
    i = V / (A-B) +1
else : i = V / (A-B) +2 

sys.stdout.writelines(str(i)+'\n')