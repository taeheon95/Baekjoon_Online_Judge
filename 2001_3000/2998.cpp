#include<iostream>
#include<string>
using namespace std;

int main()
{
    string bin, oct = "";
    int dec = 0;
    cin >> bin;
    for (int i = bin.length() - 1; i >= 0; i-=3) {
        int num = 0;
        for (int j = 0; j < 3&&i-j>=0; j++) {
            num += (bin[i - j] - '0')*(1<<j);
        }
        oct.push_back(num + '0');
    }

    for (int i = oct.length() - 1; i >= 0; i--) {
        cout << oct[i];
    }
    cout << endl;
}