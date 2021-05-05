#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string& add(const string &A, const string &B);

int main()
{
    string A, B;
    bool carry = false;
    cin>>A>>B;
    string ans;
    if(A[0] == '-' || B[0] == '-'){

    }
    else if(A[0] == '-' && B[0] == '-'){
        ans = add(A.substr(1), B.substr(1));
        ans.append(0,'-');
    }
    cout<<ans<<endl;
}

string& add(const string &A, const string &B)
{
    string ans(max(A.length(), B.length()), '0');
    bool carry = false;
    reverse(A.begin(),A.end());
    reverse(B.begin(),B.end());
    for(int i=0; i<max(A.length(), B.length()); i++){
        int temp = 0;
        ans[i] += carry;
        carry = false;
        if(i < A.length())
            temp += A[i] - '0';
        if(i < B.length())
            temp += B[i] - '0';
        ans[i] += temp;
        if(ans[i] -'0' >= 10){
            ans[i] -=  10;
            carry = true;
        }
    }
    if(carry){
        ans.append("1");
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

//sub from A - B
string& sub(const string &A, const string &B){
    string ans(max(A.length(), B.length()), '0');
    bool carry = false;
}