#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

void solve() {
    ll n, k;
    cin >> n >> k;
    string vec;
    cin >> vec;

    ll white = 0;
    
    // Count white cells in the first k-length window
    for (ll i = 0; i < k; i++) {
        if (vec[i] == 'W') white++;
    }

    ll min_white = white;

    // Sliding window
    for (ll i = k; i < n; i++) {
        if (vec[i] == 'W') white++;  // Add new character
        if (vec[i - k] == 'W') white--;  // Remove old character

        min_white = min(min_white, white);
    }

    cout << min_white << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}
