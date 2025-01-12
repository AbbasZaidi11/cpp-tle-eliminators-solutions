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
        
        vector<char>vec={'a','e','i','o','u'};
            
        string ans="";
        int j=0;
        for(int i{0};i<n;i++){
            ans.push_back(vec[j%5]);
            j+=1;
        }
        sort(ans.begin(),ans.end());
        cout<<ans<<endl;
        
    }
    return 0;
}
