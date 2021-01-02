#include <iostream>

using namespace std;

int main(void)
{
    int a, b, c, answer;
    cin >> a >> b >> c;
    answer = (b>=c)? -1 : a/b+1;
    cout<<answer<<endl;
}