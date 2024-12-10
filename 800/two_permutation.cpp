#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,a,b;
        cin>>n>>a>>b;
        if(a==b && n==a){
            cout<<"YES"<<endl;
        }else if(a+b+2<=n){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
 
    }
    return 0;
}
