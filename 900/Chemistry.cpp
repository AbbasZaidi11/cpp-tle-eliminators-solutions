#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin >> n >> k;
        string s;
        cin >> s;
        vector<int>freq(27,0);
        for(int i{0};i<n;i++){
            freq[s[i]-'a']++;
        }
        int odd=0;
        for(int i{0};i<freq.size();i++){
            if(freq[i]%2!=0){
                odd++;
            }
        }
        if((odd-k)>1){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }

    }
    return 0;
}
