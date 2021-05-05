n = list(input())
word = list("CAMBRIDGE")
i=0
while 1:
   if n[i] in word:
       n.pop(i)
   else: i+=1
   if i == len(n):
        break
for i in range(len(n)):
    print(n[i], end='')
    