n,w,h = map(int, input().split())
for i in range(n):
    m = int(input())
    if m**2 > w**2+h**2 :
        print("NE")
    else:
        print("DA")