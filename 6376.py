print("n e")
print("- -----------")
e = 1
for i in range(10):
    if i != 0:
        a = 1
        for j in range(1,i+1):
            a *= j
        e += 1/a
    print(i, e)
