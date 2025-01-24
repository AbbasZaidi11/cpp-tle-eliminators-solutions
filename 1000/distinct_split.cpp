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
        string s;
        cin >> s;
        unordered_map<char,int>mpp;
        unordered_map<char,int>mpp2;
        mpp[s[0]]++;
        for(ll i{1};i<n;i++){
            mpp2[s[i]]++;
        }
        int ans=0;
ans = std::max(ans, static_cast<int>(mpp.size()) + static_cast<int>(mpp2.size()));
        ll j=1;
        for(ll i{1};i<n-1;i++){
            mpp[s[i]]++;
            mpp2[s[j]]--;
            if(mpp2[s[j]]==0){
                mpp2.erase(s[j]);
            }
            j++;
ans = std::max(ans, static_cast<int>(mpp.size()) + static_cast<int>(mpp2.size()));
        }
        cout<<ans<<endl;
    }
    return 0;
}
