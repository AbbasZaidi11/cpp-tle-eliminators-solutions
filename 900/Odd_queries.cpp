#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,q;
        cin >> n >> q;
        vector<ll>vec;
        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            vec.push_back(temp);  
        }
        vector<ll>prefix;
        vector<ll>suffix(n,0);
        ll pre=0;
        ll suf=0;
        int j=n-1;
        for(ll i{0};i<n;i++){
            pre+=vec[i];

            prefix.push_back(pre);

            suf+=vec[j];
            
            suffix[j]=suf;
            
            j--;
        }
        while(q--){
            ll l,r,k;
            cin >> l >> r >> k;
            ll sum=0;
            if(r!=n){
                sum+=suffix[r];
            }
            if(l-2>=0){
               sum+=prefix[l-2];
            }
            sum+=((r-l+1)*k);
            if(sum % 2 == 0){
                cout << "NO" << endl;
            }else{
                cout << "YES" << endl;
            }
        }

    }
    return 0;
}
