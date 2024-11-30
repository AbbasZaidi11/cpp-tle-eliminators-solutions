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
        cin>>a>>b>>c;
        if(c%2==0){
            if(a>b){
                cout<<"First"<<endl;
            }else{ //kyunki agar a==b tab phir baat ki Anna ki turn aayegi aur kyunki a==b hai aur c bhi even tha toh ab kuch bacha hi nhi isliye katie jeet jaayegi

                cout<<"Second"<<endl;
            }
        }else{
            if(b>a){
                cout<<"Second"<<endl;
            }else{
                //kyunki agar a==b tab phir Katie ki baari aayegi aur c bhi khatm toh kuch bacha hi nhi uske paass
                cout<<"First"<<endl;
            }
        }
        
    }
    return 0;
}
