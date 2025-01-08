#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPowerOfTwo(ll n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n,x;
        cin >> n >> x;
        vector<ll>vec;
        ll sum=0;
        ll mod1=0;
        for(ll i{0}; i<n ; i++){
            ll temp;
            cin>>temp;
            mod1+=temp/x;
            if(temp%x!=0){mod1+=1;}
            sum+=temp;
            vec.push_back(temp);
        }
        ll mod2=sum/x;
        if(sum%x!=0){mod2+=1;}
        if(mod1>mod2){
            cout<<mod2<<" "<<mod1<<endl;
        }else{
            cout<<mod1<<" "<<mod2<<endl;
        }

    }
    return 0;
}
 
