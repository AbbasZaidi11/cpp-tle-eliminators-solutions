#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        vector<int>vec;
        int count=0;
        int ans=INT_MIN;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            if(temp==0){
                count++;
                ans=max(ans,count);
            }else{
                count=0;
            }
        }
        if(ans==INT_MIN){
            cout<<0<<endl;
        }else{
            cout<<ans<<endl;
        }
 
        t--;
    }
    return 0;
}
