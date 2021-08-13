#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int* nums = new int[n];
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
        cout << nums[i] << endl;
}