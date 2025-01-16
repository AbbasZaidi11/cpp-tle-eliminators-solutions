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
        string s;
        cin >> s;   
        vll prefix(26,0);
        rep(i,0,n){
            prefix[s[i]-'a']++;
        }
        char ch;
        ll a=LLONG_MAX;

        rep(i,0,26){
            if(prefix[i]!=0){
                if(prefix[i]<a){
                    a=prefix[i];
                    ch=ll('a')+i;
                }
            }
        }// to find the minimum frequency character 
        ll least=0;
        char ch1;
        rep(i,0,26){
            if(prefix[i]!=0){
                if(prefix[i]>=least){
                    least=prefix[i];
                    ch1=ll('a')+i;
                }
            }
        }
        rep(i,0,n){
            if(s[i]==ch){
                s[i]=ch1;
                break;
            }
        }
        cout<<s<<endl;


    }
    return 0;
}
