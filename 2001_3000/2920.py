l=[*map(int,input().split())]
if l==[i for i in range(1,9)]:print("ascending")
elif l==[i for i in range(8,0,-1)]:print("descending")
else:print("mixed")