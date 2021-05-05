a=int(input())
b=int(input())
c=int(input())
if a+b+c == 180:
    if a==b and b==c:
        print("Equilateral")
    elif a==b:
        print("Isosceles")
    elif b==c:
        print("Isosceles")
    elif a==c:
        print("Isosceles")
    else: print("Scalene")
else:print("Error")