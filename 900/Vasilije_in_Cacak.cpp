#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        ll n, k, x;
        cin >> n >> k >> x;
        ll low=(k*(k+1))/2;
        ll high=(n*(n+1))/2;
        high = high-(((n-k)*(n-k+1))/2);
        if(x>=low && x<=high){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
