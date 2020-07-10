while 1:
    l=input()
    if l=="0":break
    print(["yes","no"][l!=l[::-1]])