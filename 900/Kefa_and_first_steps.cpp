#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
        
    vector<int>vec;
    for(int i{0};i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    vector<int>dp(n,1);
    int ans=1;
    for(int i{1};i<n;i++){
        if(vec[i]>=vec[i-1]){
            dp[i]=dp[i-1]+1;
        }
        ans=max(ans,dp[i]);
    }
    cout<<ans<<endl;
    return 0;
}
