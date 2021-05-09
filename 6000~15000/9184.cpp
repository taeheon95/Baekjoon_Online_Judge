#include<iostream>
using namespace std;
int wcache[21][21][21];
int a,b,c;

int w(int a, int b, int c){
    if(a<=0 || b<=0 || c<=0)
        return 1;
    if(a>20 || b>20 || c>20)
        return w(20, 20, 20);

    int result = wcache[a][b][c];
    if(result != 0)
        return result;

    if (a < b && b < c){
        result = w(a, b, c - 1) + w(a, b - 1, c - 1) - w(a, b - 1, c);
        wcache[a][b][c] = result;
    }
    else{
        result = w(a - 1, b, c) + w(a - 1, b - 1, c) + w(a - 1, b, c - 1) - w(a - 1, b - 1, c - 1);
        wcache[a][b][c] = result;
    }
        
    return result;
}

int main(void){
    while(1){
        cin>>a>>b>>c;
        if(a==-1 && b==-1 && c==-1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = " << w(a, b, c) << endl;
    }
}