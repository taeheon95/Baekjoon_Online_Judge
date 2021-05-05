def gcd(a:int,b:int) -> int:
    while b:
        a,b=b,a%b
    return a
def lcm(a:int,b:int) -> int:
    return a*b//gcd(a,b)
T=int(input())
for t in range(T):
    A,B = map(int, input().split())
    print(lcm(A,B))