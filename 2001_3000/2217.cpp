#include <iostream>
#include <algorithm>

using namespace std;

int N;
int ropes[10001];

int main()
{
    cin>>N;
    int maxWeightOfRope = 0, maxiumWeightOfRopes = 0;
    int numOfRopes = 0;
    for(int i=0; i<N; i++){
        int temp;
        cin>>temp;
        ropes[temp]++;
        maxWeightOfRope = max(maxWeightOfRope, temp);
    }
    for(int i=1; i<=maxWeightOfRope; i++){
        maxiumWeightOfRopes = max(maxiumWeightOfRopes, i * (N - numOfRopes));
        numOfRopes += ropes[i];
    }
    cout<<maxiumWeightOfRopes;
}