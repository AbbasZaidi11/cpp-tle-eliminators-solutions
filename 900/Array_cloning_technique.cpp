#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>vec;
        map<ll,ll>mpp;
        ll highest=0;
        for(ll i{0};i<n;i++){
            ll temp;
            cin>>temp;
            mpp[temp]++;
            highest=max(highest,mpp[temp]);
            vec.push_back(temp);
        }
        if(mpp.size()==1 || n==1){
            cout << 0 << endl;
            continue;
        }   
        ll count=0;
        ll remaining=n-highest;
        while(remaining>0){
            count+=1;
            if(highest>remaining){
                count+=remaining;
            }else{
                count+=highest;
            }
            remaining-=highest;
            highest+=highest;
        }
        cout<<count<<endl;

    }
    return 0;
}
