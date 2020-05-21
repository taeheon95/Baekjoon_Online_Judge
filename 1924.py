def main():
    x, y = map(int, input().split())
    days = [0,31,28,31,30,31,30,31,31,30,31,30,31]
    day = sum(days[0:x], y) %7
    daydic = {0:"SUN", 1:"MON", 2:"TUE", 3:"WED",4:"THU",5:"FRI",6:"SAT"}
    print(daydic[day])

if __name__ =="__main__":
    main()