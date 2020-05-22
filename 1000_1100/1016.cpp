#include<iostream>
#include<cmath>

using namespace std;

bool nono[1000001] = {false};
long long num[1000001] = {0};

int main()
{
    long long Min, Max;
    int cnt=0;
    cin>>Min>>Max;
    long long sq_max = (long long)sqrt(Max);
    int cn=0;
    for(long long i=2; i<=sq_max+1; i++)
    {
        num[i] = i*i;
        cn++;
    }

    for(int i=2; i<cn+2; i++){
        long long div_min = Min;
        if(div_min % num[i] != 0){
            div_min = (Min/num[i]+1)*num[i];
        }
        for(long long tmp = div_min; tmp <= Max; tmp += num[i]){
            if(!nono[tmp-Min]){
                nono[tmp-Min] = true;
                cnt++;
            }
        }
    }
    cout<<Max-Min-cnt+1;
}