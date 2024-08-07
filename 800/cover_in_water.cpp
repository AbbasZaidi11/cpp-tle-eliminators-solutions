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
        string s;
        cin >> s;
        int count = 0;
        bool found = false;
        for (int i{0}; i < n; i++)
        {
            if (s[i] == '#')
            {
                continue;
            }
            else
            {

                if (i - 1 >= 0 && i + 1 < n && s[i] == '.' && s[i + 1] != '#' && s[i - 1] != '#')
                {
                    count = 2;
                    found = true;
                    break;
                }
                else if (s[i] != '#')
                {
                    count++;
                }
            }
        }
        if (found)
        {
            cout << 2 << endl;
        }
        else
        {
            cout << count << endl;
        }
        t--;
    }
    return 0;
}
