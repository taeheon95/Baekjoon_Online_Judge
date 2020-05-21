import sys
alpha = {chr(i):-1 for i in range(97,123)}
string = input()
for i in range(len(string)):
    if alpha[string[i]] != -1 :
        continue
    else: alpha[string[i]] =i
for i in alpha.values():
    sys.stdout.writelines(str(i) + ' ')
print()