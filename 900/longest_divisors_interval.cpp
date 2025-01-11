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
        if(n%2!=0){
            cout<<1<<endl;
            continue;
        }
        ll ans;
        for(ll i=1;;i++){
            if(n%i!=0){
                ans=i-1;
                break;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
