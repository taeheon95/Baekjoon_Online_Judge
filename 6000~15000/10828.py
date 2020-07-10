class stack:
    def __init__(self):
        self.top = 0
        self.stacklist = []

    def push(self, n):
        self.stacklist.append(n)
        self.top+=1

    def pop(self):
        if self.top != 0:
            n = self.stacklist.pop()
            self.top -= 1
            return n
        else :
            return -1

    def size(self):
        return self.top

    def empty(self):
        if self.top != 0:
            return 0
        else:
            return 1

    def top(self):
        if self.top == 0:
            return -1
        else:
            n = self.stacklist.pop()
            self.stacklist.append(n)
            return n

test = stack()
for i in range(int(input())):
    control = input()
    if control == 'pop':
        print(test.pop())
    elif control == 'size':
        print(test.size())
    elif control == 'empty':
        print(test.empty())
    elif control == 'top':
        print(test.top())
    else:
        test.push(int(control[-1]))