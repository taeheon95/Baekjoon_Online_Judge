a,b,c,d,p = [int(input()) for i in range(5)][::1]
pc = p-c if p>c else 0
if a*p > b+pc*d:
    print(b+pc*d)
else: print(a*p)