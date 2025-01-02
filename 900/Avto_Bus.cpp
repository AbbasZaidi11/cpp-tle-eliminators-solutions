#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        if(n%2!=0 || n<=3){
            cout<<-1<<endl;
        }else if(n%6==0){
            cout << (n/6) << " " << n/4 << endl;
        }else{
            cout << (n/6)+1 << " " << n/4 << endl;
        }
    }
    return 0;
}
