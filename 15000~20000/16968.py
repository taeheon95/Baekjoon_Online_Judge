zari = input()
for i in range(len(zari)):
    if i == 0:
        if zari[i] == 'd':
            ans = 10
        else:
            ans = 26
    else:
        if zari[i] == 'd':
            if zari[i-1] == 'd':
                ans*=9
            else:
                ans*=10
        else:
            if zari[i-1] == 'c':
                ans*=25
            else:
                ans*=26

print(ans)