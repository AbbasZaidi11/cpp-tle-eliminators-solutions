#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool check(int i){
    string s=to_string(i);
    int cnt=0;
    for(int i{0};i<s.size();i++){
        if(s[i]!='0'){
            cnt++;
        }
    }
    return cnt==1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    set<int>candidates;
    for(int i{1};i<1e7;i++){
        if(check(i)){
            candidates.insert(i);
        }
    }

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ans=0;
        for(auto it:candidates){
            if(it<=n){
                ans++;
            }
        }
        cout<<ans<<endl;

    }
    return 0;
}
