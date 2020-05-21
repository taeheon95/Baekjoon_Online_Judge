sn = input("주민등록번호: ")

days = [0,31,28,31,30,31,30,31,31,31,31,30,31]

rule = "234567892345"
number = sum([int(sn[i])*int(rule[i]) for i in range(len(rule))])
print(number)

num = 11 - (number%11)
if num >= 10:
    num -= 10

if num == int(sn[12]):
    if int(sn[0:2])%4 == 0:
        days[2] += 1

    if days[int(sn[2:4])] < int(sn[4:6]) or int(sn[4:6] == 0):
        print("정상적이지 않은 주민등록번호입니다.")
    elif int(sn[6]) > 4 and int(sn[6]) <= 0:
        print("정상적이지 않은 주민등록번호입니다.")
    elif int(sn[7:9]) > 95:
        print("정상적이지 않은 주민등록번호입니다.")
    else:
        print("정상적인 주민등록번호입니다.")
else:
    print("정상적이지 않은 주민등록번호입니다.")