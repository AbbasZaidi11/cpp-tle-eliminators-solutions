#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a;
        int sum=0;
        int prod=1;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            sum=sum+temp;
            prod=prod*temp;
        }
        int ans=0;
        while(sum<0 || prod!=1){
            sum=sum+2;
            prod=prod/-1;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
