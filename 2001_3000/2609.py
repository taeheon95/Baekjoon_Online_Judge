def gcd(a:int,b:int) -> int:
    while b:
        a,b=b,a%b
    return a

def lcm(a:int,b:int) -> int:
    return a*b//gcd(a,b)

a,b=map(int,input().split())
print(gcd(a,b))
print(lcm(a,b))