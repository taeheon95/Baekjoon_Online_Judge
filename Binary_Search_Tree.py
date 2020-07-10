class Node:
    def __init__(self, data=None):
        self.data = data
        self.left = None
        self.right = None

class binary_search_tree(object):
    def __init__(self, data = None):
        self.root = Node(data)
        self.num = 0

    def insert(self, data):
        newnode = Node(data)
        if self.root is None:
            self.root = newnode
            return
        else:
            current = self.root
            while True:
                parent = current
                if data < current.data:
                    current = current.left
                    if current.left == None:
                        current.left = newnode
                        break
                else:
                    current = current.right
                    if current.right == None:
                        current.right = newnode
                        break

    def postorder(self, cur):
        if cur is None:
            return
        else:
            self.postorder(cur.left)
            self.postorder(cur.right)
            print(cur.data)

if __name__ == "__main__":
    test = binary_search_tree()
    test.insert(50)
    test.insert(30)
    test.insert(24)
    test.insert(5)
    test.insert(28)
    test.insert(45)
    test.insert(98)
    test.insert(52)
    test.insert(60)
    test.postorder(test.root)