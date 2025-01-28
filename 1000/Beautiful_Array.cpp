#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, b, s;
        cin >> n >> k >> b >> s;

        vector<ll> ans(n, 0);
        ans[0] = b * k;

        ll rem=s-(b*k);
        if(rem<0){
            cout<<-1<<endl;
            continue;
        }
        for (ll i = 0; i < n; i++) {
            ll possible=min(k-1,rem);
            ans[i]+=possible;
            rem-=possible;
        }
        if(rem>0){
            cout<<-1<<endl;
            continue;
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<endl;

    }

    return 0;
}
