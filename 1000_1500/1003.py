fi=[[0,0] for i in [0]*42]
fi[0][0]=1;fi[0][1]=0;fi[1][0]=0;fi[1][1]=1
n=[]
for T in range(int(input())):
    n.append(int(input()))
for i in range(max(n)):
    fi[i+2][0]=fi[i+1][0]+fi[i][0]
    fi[i+2][1]=fi[i+1][1]+fi[i][1]
for i in n:
    print(fi[i][0],fi[i][1])