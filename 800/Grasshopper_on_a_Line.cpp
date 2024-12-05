#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int x,k;
        cin>>x>>k;
        int count=0;
        if(x%k!=0){
            cout<<1<<endl;
            cout<<x<<endl;
        }else{
            if(1%k!=0){
                cout<<2<<endl;
                cout<<x-1<<" "<<1<<endl;
            }else{
                cout<<2<<endl;
                cout<<x-2<<" "<<2<<endl;
            }
        }
    }
    return 0;
}
