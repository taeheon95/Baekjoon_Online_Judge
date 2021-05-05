string = input()
count = len(string)
for i in range(len(string)):
    if string[i] == '=' :
        count -= 1
        if string[i-2:i] == 'dz':
            count -= 1
    if string[i] == '-' :
        count -=1
    if string[i] == 'j' and i>0:
        if string[i-1] == 'l' or string[i-1] == 'n':
            count -= 1

print(count)