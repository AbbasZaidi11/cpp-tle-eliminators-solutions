#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        ll n, k;
        cin >> n >> k;
        ll ans = LLONG_MAX; // Minimum cost
        ll even = 0;        // Count of even numbers

        for (int i = 0; i < n; i++) {
            ll temp;
            cin >> temp;

            // Check divisibility by k
            if (temp % k == 0) {
                ans = 0;
            } else {
                ans = min(ans, k - temp % k);
            }

            // Count even numbers
            if (temp % 2 == 0) {
                even++;
            }
        }

        if (k != 4) {
            cout << ans << endl;
        } else {
            if (even >= 2) {
                cout << 0 << endl;
            } else if (even == 1) {
                cout << min(ans, 1LL) << endl;
            } else {
                cout << min(2LL, ans) << endl;
            }
        }
    }

    return 0;
}
