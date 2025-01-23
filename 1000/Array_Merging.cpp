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
        vector<ll>a;
        vector<ll>b;
        set<ll>elements;
        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            elements.insert(temp);
            a.push_back(temp);
        }
        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            elements.insert(temp);
            b.push_back(temp);
        }

        map<ll,ll>mpp1;
        map<ll,ll>mpp2;

        ll count=1;
        ll ans=0;
        mpp1[a[0]]=1;
        for(ll i{1};i<a.size();i++){
            if(a[i]!=a[i-1]){
                count=1;
            }else{
                count+=1;
            }
            mpp1[a[i]]=max(mpp1[a[i]],count);
        }
        ll count1=1;
        mpp2[b[0]]=1;
        for(ll i{1};i<b.size();i++){
            if(b[i]!=b[i-1]){
                count1=1;
            }else{
                count1+=1;
            }
            mpp2[b[i]]=max(mpp2[b[i]],count1);
        }
        for(auto e:elements){
            ans=max(ans,mpp1[e]+mpp2[e]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
