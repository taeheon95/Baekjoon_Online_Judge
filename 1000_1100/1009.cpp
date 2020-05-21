#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int a, b;
        cin >> a >> b;
        a %= 10;
        if (a == 0)
            cout << 10;
        else {
            vector<int>al;
            al.push_back(a);
            while (al[0] != al[al.size() - 1] * a % 10)
                al.push_back(al[al.size() - 1] * a%10);
            int r = b % al.size() - 1;
            if (r == -1)
                cout << al.back();
            else
                cout << al[r];
        }
        cout << endl;
    }
}