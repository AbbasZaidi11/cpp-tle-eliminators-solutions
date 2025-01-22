#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<ll, ll> pll;
static bool comp(pair<ll,ll>p1,pair<ll,ll>p2){
    if(p1.first>p2.first){
        return true;
    }else if(p1.first==p2.first){
        return p1.second<p2.second;
    }
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin >> n >>k;
        vector<pair<ll,ll>> vec;

        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            if(temp%k==0){
                vec.push_back({k,i+1});
                continue;
            }
            vec.push_back({temp%k,i+1});
        }
        sort(vec.begin(),vec.end(),comp);    
        for(auto a:vec){
            cout<<a.second<<" ";
        }
        cout<<endl;

    }
    return 0;
}
