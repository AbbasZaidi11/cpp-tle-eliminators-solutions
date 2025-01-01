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
        vector<ll>vec;
        ll ops=2*n;
        for(ll i{0};i<n;i++){
            ll temp;
            cin>>temp;
            if(temp==1){
                ops--;
                temp++;
            }
            vec.push_back(temp);
        }
        for(ll i{1};i<n;i++){
            if(vec[i]%vec[i-1]==0){
                if(ops!=0){
                     vec[i]++;
                     ops--;
                }
            } 

        }
        for(ll i{0};i<n;i++){
            cout<<vec[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
