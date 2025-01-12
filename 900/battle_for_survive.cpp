#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n ;
        vector<ll>vec;
        for(ll i{0};i<n;i++){
            ll temp;
            cin>>temp;
            vec.push_back(temp);
        }
        ll ans=vec[n-2];
        for(ll i{n-3};i>=0;i--){
            ans-=vec[i];
        }
        cout<<vec[n-1]-ans<<endl;
    }
    return 0;
}
