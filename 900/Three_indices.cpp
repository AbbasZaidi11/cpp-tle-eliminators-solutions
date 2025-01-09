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
        vector<ll>vec(n+1);
        for(ll i{1};i<=n;i++){
            cin >> vec[i];
        }
        bool found=false;
        for(ll i{1};i<=n;i++){
            ll left=i-1;
            ll right=i+1;
            while(left>=1){
                if(vec[left]<vec[i]){
                    break;
                }
                left--;
            }
            while(right<=n){
                if(vec[right]<vec[i]){
                    break;
                }
                right++;
            }
            if(left>=1 && right<=n && vec[left]<vec[i] && vec[right]<vec[i]){
                cout<<"YES"<<endl;
                cout<<left<<" "<<i<<" "<<right<<endl;
                found=true;
                break;
            }
        }
        if(!found){cout<<"NO"<<endl;}

    }
    return 0;
}
