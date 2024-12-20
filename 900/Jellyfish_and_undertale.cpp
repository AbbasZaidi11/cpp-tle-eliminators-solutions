#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a,b,n;
        cin >> a >> b >> n;
        vector<ll>vec;
        ll ans=b;
        for(int i{0};i<n;i++){
            ll temp;
            cin>>temp;
            ans+=min(temp,a-1);
            vec.push_back(temp);
        }

        cout<<ans<<endl;
    }
    return 0;
}
