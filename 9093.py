for i in range(int(input())):
    sentences = input().split()
    for j in sentences:
        print(j[::-1], end=' ')

print(*input()[::-1].split()[::-1])