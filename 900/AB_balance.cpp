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
        ll n=s.size();
        ll ab=0;
        ll ba=0;
        for(int i{0};i<n-1;i++){
            if(s[i]=='a' && s[i+1]=='b'){
                ab++;
            }
            if(s[i]=='b' && s[i+1]=='a'){
                ba++;
            }
        }
        if(ab==ba){
            cout<<s<<endl;
            continue;
        }
        if(ab>ba){
            if(s.front()=='a'){
                s[0]='b';
            }else{
                s[n-1]='a';
            }
        }else{
            if(s.front()=='b'){
                s[0]='a';
            }else{
                s[n-1]='b';
            }
        }
        cout<<s<<endl;

    }
    return 0;
}

