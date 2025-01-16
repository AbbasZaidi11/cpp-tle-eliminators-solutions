#include <bits/stdc++.h>
using namespace std;

// Typedefs
typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

// Macros
#define FAST_IO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
#define rep(i, a, b) for (ll i = a; i < b; ++i)
#define rev(i, a, b) for (ll i = a; i >= b; --i)
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define sz(x) (ll)(x.size())
#define debug(x) cout << #x << " = " << x << endl;
#define endl '\n'

// Constants
const ll MOD = 1e9 + 7;
const ll INF = 1e18;

int main() {
    FAST_IO;
    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        vll vec;
        rep(i, 0, n) {
            ll temp;
            cin >> temp;
            vec.pb(temp);
        }

        // Example usage of macros:
        sort(all(vec));           // Sort the vector in ascending order
        rev(i, sz(vec) - 1, 0) {  // Print the vector in reverse order
            cout << vec[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
