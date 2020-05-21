import sys
def main():
    sentence = list(sys.stdin.readline())
    j = len(sentence)
    for i in range(int(sys.stdin.readline())):
        command = list(sys.stdin.readline())
        if command[0] == 'P':
            sentence.insert(j, command[2])
            j+=1
        elif command[0] == 'L':
            if j !=0:
                j -= 1
        elif command[0] == 'D':
            if j != len(sentence):
                j += 1
        elif command[0] == 'B':
            if j !=0:
                sentence.pop(j-1)
                j -= 1
    print(''.join(sentence[::1]))

if __name__ =="__main__":
    main()