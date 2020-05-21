ns = [int(input()) for i in range(5)]
su = 0
for n in ns:
    if n>=40:
        su+=n
    else: su+=40

print(int(su/5))
