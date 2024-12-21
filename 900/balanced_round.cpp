#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll>vec;
        
        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            vec.push_back(temp);
        }
        if(n == 1){
            cout << 0 << endl;
            continue;
        }        
        int count = 1;
        int maxi = 1;
        sort(vec.begin(),vec.end());
        for(int i{1};i<n;i++){
            if(abs(vec[i]-vec[i-1]) > k){
                count=1;
            }else{
                count++;
            }
            maxi=max(maxi,count);
        }
        cout << n-maxi << endl; 
    }
    return 0;
}
