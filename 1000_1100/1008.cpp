#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    std::cout<<std::setprecision(16);
    int a, b;
    long double c;
    cin>>a>>b;
    c = (long double)a/(long double)b;
    cout<<c<<endl;
}