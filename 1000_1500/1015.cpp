#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<pair<int, int> > p(n);
    for (int i = 0; i < n; i++)
    {
        cin >> p[i].first;
        p[i].second = i;
    }
    sort(p.begin(), p.end());

    for (int i = 0; i < n; i++)
    {
        cout << p[i].second;
    }
}