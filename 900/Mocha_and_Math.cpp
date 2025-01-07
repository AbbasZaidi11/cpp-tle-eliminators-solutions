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
        cin>>n;
        vector<ll>vec(n+1);
        ll ans=0;
        for(ll i{1};i<=n;i++){
            cin>>vec[i];
            if(i==1){
                ans=vec[i];
            }else{
                ans=ans&vec[i];
            }
        }
        cout<<ans<<endl;     
        


    }
    return 0;
}
