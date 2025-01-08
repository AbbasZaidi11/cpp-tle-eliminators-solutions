#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>top;
        for(ll i{0};i<n*k;i++){
                ll temp;
                cin>>temp;
                top.push_back(temp);
        }
        ll ans=0;
        ll i=(n*k);

        while(k--){
            i=i-(n/2+1);
            ans+=top[i];
        }
        cout<<ans<<endl;
    }
    return 0;
}
