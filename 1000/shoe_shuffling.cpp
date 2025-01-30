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
        vector<ll>vec;
        map<ll,vector<ll>>mpp;
        ll maxi=LLONG_MIN;
        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            mpp[temp].push_back(i);
            vec.push_back(temp);
        }
        bool not_possible=false;
        for(auto a:mpp){
            if(a.second.size()==1){
                not_possible=true;
                break;
            }
        }
        if(not_possible){
            cout<<-1<<endl;
            continue;
        }
        vector<ll>ans;
        for(ll i{0};i<n;i++){
            auto& temp=mpp[vec[i]];
            ll k=temp.size();
            for(ll j{k-1};j>=0;j--){
                if(temp[j]!=i && temp[j]!=-1){
                    ans.push_back(temp[j]+1);
                    temp[j]=-1;
                    break;
                }
            }
            mpp[vec[i]]=temp;
        }
        for(auto a:ans){
            cout<<a<<" ";
        }
        cout<<endl;        
    }
    return 0;
}
