#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        ll n,p;
        cin >> n >> p;
        vector<ll>a;
        vector<ll>b;
        vector<pair<ll,ll>>cost;


        ll people=n-1;

        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            a.push_back(temp);
        }
        for(ll i{0};i<n;i++){
            ll temp;
            cin >> temp;
            b.push_back(temp);
        }

        for(ll i{0};i<n;i++){
            cost.push_back({b[i],a[i]});
        }

        sort(cost.begin(),cost.end());
        ll ans=p;
        for(ll i{0};i<n;i++){
            if(cost[i].first>=p){
                break;
            }else if(people==0){
                break;
            }else if(cost[i].first <p && people!=0){
                if(cost[i].second<=people){
                    ans+=(cost[i].second * cost[i].first);
                    people-=cost[i].second;
                }else{
                    ans+=people * cost[i].first;
                    people=0;
                }
            }
        }
        if(people!=0){
            ans+=(p*people);
        }
        cout<<ans<<endl;
    }
    return 0;
}
