while True:
    a,b,c = map(int, input().split())
    if a+b+c == 0:
        break

    if a == b and b == c:
        print("Equilateral")
    else:
        if max(a,b,c) < sum(sorted([a,b,c], reverse=True)[1:3]) :
            if a == b or b == c or c == a:
                print("Isosceles")
            else:
                print("Scalene")
        else:
            print("Invalid")