#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string s;
        cin >> s;
        ll ones=0,zeroes=0;
        for(ll i{0};i<s.size();i++){
            if(s[i]=='1'){
                ones+=1;
            }else{
                zeroes+=1;
            }
        }
        ll moves=min(ones,zeroes);
        if(moves%2!=0){
            cout<<"DA"<<endl;
        }else{
            cout<<"NET"<<endl;
        }
    }
    return 0;
}
