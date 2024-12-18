#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        ll n,k;
        cin>>n>>k;
        if(k>((n+1)/2)){
            ll temp=k-(n+1)/2;
            cout<<temp*2<<endl;
            return 0;
        }
        cout<<(k*2)-1<<endl;
    
    return 0;
}
