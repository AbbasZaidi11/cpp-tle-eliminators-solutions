#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<cstring>
#include<vector>
#include<map>
#include<math.h>
#include<string>
#define int long long int
using namespace std;

int a[500010];
int32_t main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int min1 = 1000000010;
        int min2 = 1000000010;
        int rest = 0;
        for (int i = 0; i < n; i++) {
            int m;
            cin >> m;
            for (int j = 0; j < m; j++) {
                cin >> a[j];
            }
            sort(a, a + m);
            min1 = min(min1, a[0]);
            min2 = min(min2, a[1]);
            rest += a[1];
        }
        rest -= min2;
        rest += min1;
        cout << rest << endl;
    }
    return 0;
}
