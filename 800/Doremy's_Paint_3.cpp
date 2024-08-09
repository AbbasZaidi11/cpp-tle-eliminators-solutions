#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> mpp;
        for (int i = 1; i <= n; ++i)
        {
            int x;
            cin >> x;
            mpp[x]++;
        }
        if (mpp.size() >= 3)
            puts("No");
        else
        {
            if (abs(mpp.begin()->second - mpp.rbegin()->second) <= 1)
            {
                puts("Yes");
            }
            else
            {
                puts("No");
            }
        }
    }
    return 0;
}
