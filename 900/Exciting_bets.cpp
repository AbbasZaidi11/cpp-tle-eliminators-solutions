#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(a==b){
            cout<<0 <<" "<< 0 <<endl;
            continue;
        }
        ll excite=abs(a-b);
        if(excite==1){
            cout<< 1 << " " << 0<<endl;
            continue;
        }
        ll ops=min(a%excite,excite-(a%excite));
        ops=min(b%excite,excite-(b%excite));
        cout<<excite<<" "<<ops<<endl;

    }
    return 0;
}
