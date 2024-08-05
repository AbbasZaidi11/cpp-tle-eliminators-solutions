#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> stations(n);
        for (int i = 0; i < n; i++)
        {
            cin >> stations[i];
        }

        int max_distance = stations[0]; // Distance from 0 to first station
        for (int i = 1; i < n; i++)
        {
            max_distance = max(max_distance, stations[i] - stations[i - 1]);
        }
        max_distance = max(max_distance, 2 * (x - stations[n - 1])); // Round trip from last station to x

        cout << max_distance << endl;
    }
    return 0;
}
