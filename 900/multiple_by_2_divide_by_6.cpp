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
        ll ans=0;
        if(n==1){
            cout<<0<<endl;
            continue;
        }else if(n%3!=0){
            cout<<-1<<endl;
            continue;
        }
        bool possible=true;
        while(n>1){
            if(n%3!=0){
                cout<<-1<<endl;
                possible=false;
                break;
            }
            else if(n%6==0){
                n=n/6;
                ans+=1;
            }else{
                n=n*2;
                ans+=1;
            }
        }
        if(possible){cout<<ans<<endl;}
    }
    return 0;
}
