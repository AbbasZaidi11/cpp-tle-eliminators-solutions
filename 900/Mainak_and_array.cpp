#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec;
        for(ll i{0};i<n;i++){
            ll temp;
            cin>>temp;
            vec.push_back(temp);
        }
        ll ans=0;
        for(ll i{1};i<n;i++){
            ans=max(ans,vec[i]-vec[0]);
        }
        for(ll i{0};i<n-1;i++){
            ans=max(ans,vec[n-1]-vec[i]);
        }
        // Correct code
for(int i = 0; i < n; ++i){
    ans = max(ans, vec[(i-1+n)%n] - vec[i]);  // Compares with previous element in circular fashion
}
        ans=max(ans,vec[n-1]-vec[0]);
        cout<<ans<<endl;
    }
    return 0;
}

