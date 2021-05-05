#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string bigInt_add(string a, string b)
{
    int sum = 0, carry = 0, length = max(a.size(), b.size());
    string c('0', length);

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    
    for(int i=0; i<length; i++){
        sum = 0;
        sum += carry;
        if(i<a.size()){
            sum += a[i] - '0';
        }
        if(i<b.size()){
            sum += b[i] - '0';
        }
        carry = sum / 10;
        sum %= 10;
        c[i] = sum + '0';
    }
    if(carry >= 1){
        c.push_back(carry + '0');
    }
    reverse(c.begin(), c.end());

    return c;
}

int main()
{
    string a, b, c;
    cin>>a>>b;
    c=bigInt_add(a, b);
    cout<<c<<endl;
}