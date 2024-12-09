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
        for(int i{0};i<n;i++){
            ll temp;
            cin>>temp;
            vec.push_back(temp);
        }
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        int count=0;
        for(int i{1};i<n;i++){
            if(vec[i]%2==0 && vec[i-1]%2==0){
                count++;
            }else if(vec[i]%2!=0 && vec[i-1]%2!=0){
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
