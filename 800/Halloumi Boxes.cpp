#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t)
    {
        int n, k;
        cin >> n >> k;
        vector<int> temp;
        for (int i{0}; i < n; i++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        bool isAsc = true;
        for (int i{0}; i < n; i++)
        {
            if (i > 0 && temp[i - 1] > temp[i])
            {
                isAsc = false;
                break;
            }
        }
        if (k >= 2)
        {
            cout << "YES" << endl;
        }
        else if (isAsc)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }

        t--;
    }
    return 0;
}
