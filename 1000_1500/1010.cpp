#include<iostream>
using namespace std;
int com[31][31] = {0};
int combi(int m, int n);
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < 31; i++) {
        com[i][i] = 1;
        com[i][0] = 1;
    }
    for (int i = 0; i < t; i++) {
        int a, b;
        cin >> a >> b;
        if(a>b)
            cout << combi(a, b) << endl;
        else
            cout << combi(b, a) << endl;
        
    }
}

int combi(int m, int n)
{
    if (com[m][n] != 0)
        return com[m][n];
    else
        return com[m][n] = combi(m - 1, n) + combi(m - 1, n - 1);
}
