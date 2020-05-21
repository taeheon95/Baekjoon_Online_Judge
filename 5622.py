dial = 'ABC DEF GHI JKL MNO PQRS TUV WXYZ'.split()
dialdict = {}
for i in range(len(dial)):
    for j in range(len(dial[i])):
        dialdict[dial[i][j]] = i+2
s = input()
sint = [dialdict[s[i]] for i in range(len(s))]
sum = 0
for i in range(len(sint)):
    sum += sint[i]+1
print(sum)