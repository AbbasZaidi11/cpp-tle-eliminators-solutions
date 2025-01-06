#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vector<ll> vec;
        ll ones = 0;
        ll zeroes = 0;
        for (ll i = 0; i < n; i++) {
            ll temp;
            cin >> temp;
            if (temp == 1) {
                ones += 1;
            }
            if (temp == 0) {
                zeroes += 1;
            }
            vec.push_back(temp);
        }
        if (ones == 0) {
            cout << 0 << endl;
            continue;
        } else {
            if (zeroes == 0) {
                cout << ones << endl;
            } else {
                cout << ones * (1ll << zeroes) << endl; // Use bitwise shift for 2^zeroes
            }
        }
    }
    return 0;
}
