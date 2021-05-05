//This code was failed

#include<iostream>

using namespace std;

int arr[100001] ={0};

int main()
{
    int n, max=-1000;
    int sum = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    for(int i=0; i<n; i++){
        sum = 0;
        for(int j=0; j<=i; j++){
            sum += j;
            if(sum > max)
                max = sum;
        }
    }
    cout<<max;
}