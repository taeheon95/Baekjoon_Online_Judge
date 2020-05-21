#include<iostream>
#include<string>
using namespace std;

int main()
{
    int N;
    cin>>N;
    string* file = new string[N];
    for(int i=0; i<N; i++){
        cin>>file[i];
    }
    string result(file[0]);
    for(int j=0; j<result.size(); j++)
    {
        for(int i=0; i<N; i++)
        {
            if(result[j] != file[i][j])
                result[j] = '?';
        }
    }
    cout<<result<<endl;
}