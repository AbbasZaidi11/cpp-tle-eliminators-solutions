#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll a,b,c;
        cin >> a >> b >> c;

        bool yes=false;
        if((2*b-c)%a==0){
            if((2*b-c)/a > 0){
                yes=true;
            }
        }
        if((c+a)%(2*b)==0){
            yes=true;
        }
        if((2*b-a)%c==0){
            if((2*b-a)/c > 0){
                yes=true;
            }
        }
        if(a==b && b==c){
            yes=true;
        }
        if(yes){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
