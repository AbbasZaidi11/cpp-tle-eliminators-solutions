#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool isPowerOfTwo(ll n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n;
        bool found=false;
        if(n%2==1 && n>1){
            cout<<"YES"<<endl;
            continue;
        }
        if (isPowerOfTwo(n)) {
            cout << "NO" << endl;
        } else {
            cout << "YES"<<endl;
        }

    
    }
    return 0;
}
 
