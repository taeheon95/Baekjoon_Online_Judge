for i in range(1000, 10000):
    s10=0;s12=0;s16=0;j=i
    while j!=0:
        s10 += j%10
        j = j//10
    j=i
    while j!=0:
        s12 += j%12
        j = j//12
    j=i
    while j!=0:
        s16 += j%16
        j = j//16
    if s10 == s12 and s12 == s16:
        print(i)