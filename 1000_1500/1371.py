from collections import Counter
from functools import reduce
import sys

inStr = sys.stdin.read()

s = reduce(lambda x, y: x+y, inStr.split())    
dic = Counter(s)
outdic = sorted(list(filter(lambda x:x[1] == max(dic.values()), dic.items())))

for ch in outdic:
    print(ch[0], end="")