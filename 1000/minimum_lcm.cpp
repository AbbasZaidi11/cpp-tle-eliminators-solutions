#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int lcm(int a, int b) {
    return (a / __gcd(a, b)) * b;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin >> n ;
        int a=1;
        for(ll i=2;i*i<=n;i++){
            if(n%i==0){
                a=n/i; //In the line a = n / i;, the program is calculating the largest factor of 

                break;
            }
        }

        cout<<a<<" "<<n-a<<endl;
    }
    return 0;
}
