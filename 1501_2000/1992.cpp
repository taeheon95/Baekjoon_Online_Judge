#include<iostream>
#include<string>
using namespace std;

int images[65][65] = {0};
string quad_tree(int x, int y, int n);

int main() {
    int N;
    cin >> N;
    string line;
    string result;

    for (int i = 0; i < N; i++) {
        cin >> line;
        for (int j = 0; j < N; j++) {
            images[i][j] = line[j] - '0';
        }
    }


    result.append(quad_tree(0, 0, N));
    cout << result;
}

string quad_tree(int x, int y, int n) {
    if (n == 1)
        return to_string(images[x][y]);

    string result = "";
        for (int i = x; i < x + n; i++) {
            for (int j = y; j < y + n; j++) {
                if (images[i][j] != images[x][y]) {
                    result.append("(");
                    result.append(quad_tree(x, y, n / 2));
                    result.append(quad_tree(x, y + n / 2, n / 2));
                    result.append(quad_tree(x + n / 2, y, n / 2));
                    result.append(quad_tree(x + n / 2, y + n / 2, n / 2));
                    result.append(")");

                    return result;
                }
            }
        }

    return to_string(images[x][y]);
}