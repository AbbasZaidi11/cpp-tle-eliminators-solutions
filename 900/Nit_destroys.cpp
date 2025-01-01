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
        ll sum=0;
        for(ll i{0};i<n;i++){
            ll temp;
            cin>>temp;
            sum+=temp;
            vec.push_back(temp);
        }
        if(sum==0){
            cout<<0<<endl;
            continue;
        }
        if(n==1 && vec[0]!=0){
            cout<<1<<endl;
            continue;
        }
        ll count=0;
        if(vec[0]!=0){
            count++;
        }
        for(ll i{1};i<n;i++){
            if(vec[i]!=0 && vec[i-1]==0){
                count++;
            }
        }
        if(count>2){
            cout<<2<<endl;
        }else{
            cout<<count<<endl;
        }

    }
    return 0;
}

