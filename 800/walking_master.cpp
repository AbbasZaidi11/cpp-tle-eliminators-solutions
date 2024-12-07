#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if(b>d || (b==d && a<c)){
            cout<<-1<<endl;
            continue;
        }else{
            int moves=0;
            while(b<d){
                b=b+1;
                a=a+1;
                moves++;
            }
            while(a>c){
                a=a-1;
                moves++;
            }
            if(a==c && b==d){
                cout<<moves<<endl;
                }else{
                cout<<-1<<endl;
            }
        }

    }
    return 0;
}
