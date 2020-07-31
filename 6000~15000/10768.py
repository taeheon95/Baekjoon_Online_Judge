m=int(input())
d=int(input())
if (m-1)*31+d>31+18:
    print("After")
elif (m-1)*31+d==31+18:
    print("Special")
else:
    print("Before")