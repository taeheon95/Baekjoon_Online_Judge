a,o,b = [input() for i in range(3)][::1]
if o == '+':
    print(int(a)+int(b))
else:
    print(int(a)*int(b))