a=input()
ad = {"ㄱ":1,"ㄲ":2,"ㄴ":3,"ㄷ":4,
    "ㄸ":5, "ㄹ":6, "ㅁ":7, "ㅂ":8,
     "ㅃ":9, "ㅅ":10, "ㅆ":11, "ㅇ":12,
     "ㅈ":13, "ㅉ":14, "ㅊ":15, "ㅋ":16,
     "ㅌ":17, "ㅍ":18, "ㅎ":19}
b=input()
bl="ㅏㅐㅑㅒㅓㅔㅕㅖㅗㅘㅙㅚㅛㅜㅝㅞㅟㅠㅡㅢㅣ"
bd={bl[i]:i+1 for i in range(len(bl))}
c=input()
cl="ㄱㄲㄳㄴㄵㄶㄷㄹㄺㄻㄼㄽㄾㄿㅀㅁㅂㅄㅅㅆㅇㅈㅊㅋㅌㅍㅎ"
cd={cl[i]:i+2 for i in range(len(cl))}
cd[""]=1
print(chr(ord("가")+ad[a]*bd[b]*cd[c]-1))