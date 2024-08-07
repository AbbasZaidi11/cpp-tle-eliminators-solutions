#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n;
        cin >> n;
        vector<int> temp;
        int maxi = INT_MAX;
        for (int i{0}; i < n; i++)
        {
            int x;
            cin >> x;
            maxi = min(x, maxi);
            temp.push_back(x);
        }
        if (temp[0] != maxi)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
        t--;
    }

    return 0;
}
