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
        bool not_possible=false;
        for(ll i{n-1};i>0;i--){
            while(vec[i]<=vec[i-1] && vec[i-1]>0){
                vec[i-1]=vec[i-1]/2;
                ans+=1;
            }
            if(vec[i]==0){
                not_possible=true;
                break;
            }
        }
        if(not_possible){
            cout<<-1<<endl;
        }else{
            cout<<ans<<endl;
        }
    }
    return 0;
}
