#include<iostream>
using namespace std;

struct BtNode {
    BtNode* left;
    BtNode* right;
    char ch;
};

void preOrderTreverse(BtNode* node) {
    cout << node->ch;
    if (node->left != nullptr)
        preOrderTreverse(node->left);
    if (node->right != nullptr)
        preOrderTreverse(node->right);
}

void midOrderTreverse(BtNode* node) {
    if (node->left != nullptr)
        midOrderTreverse(node->left);
    cout << node->ch;
    if (node->right != nullptr)
        midOrderTreverse(node->right);
}

void postOrderTreverse(BtNode* node) {
    if (node->left != nullptr)
        postOrderTreverse(node->left);
    if (node->right != nullptr)
        postOrderTreverse(node->right);
    cout << node->ch;
}

int main() {
    BtNode* nodes = new BtNode[26];
    int N;
    cin >> N;
    for (int i = 0; i < 26; i++) {
        nodes[i].ch = 'A' + i;
        nodes[i].left = nullptr;
        nodes[i].right = nullptr;
    }
    for (int i = 0; i < N; i++) {
        char rtNode, leftNode, rightNode;
        cin >> rtNode >> leftNode >> rightNode;
        if (leftNode != '.')
            nodes[rtNode-'A'].left = &nodes[leftNode - 'A'];
        if (rightNode != '.')
            nodes[rtNode-'A'].right = &nodes[rightNode - 'A'];
    }
    preOrderTreverse(&nodes[0]);
    cout << endl;
    midOrderTreverse(&nodes[0]);
    cout << endl;
    postOrderTreverse(&nodes[0]);
    cout << endl;
    delete[] nodes;
}