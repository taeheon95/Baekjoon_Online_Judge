#include<iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        int x, y;
        cin>>x>>y;
        int times=0;
        long long sum=0, j=1;
        while(sum < y-x)
        {
            sum += j;
            times+=1;
            if(sum < y-x){
                sum += j;
                times += 1;
            }
            j++;
        }
        cout<<times<<endl;
    }
}