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
        cin >> n;
        string s;
        cin >> s;
        if(s.size()==1){
            cout<<2<<endl;
            continue;
        }
        int count=1;
        int ans=1;
        for(int i{1};i<s.size();i++){
            if(s[i]!=s[i-1]){
                count=1;
            }else{
                count++;
            }
            ans=max(ans,abs(count));
        }
        cout<<ans+1<<endl;   

    }
    return 0;
}
