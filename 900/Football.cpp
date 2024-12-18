#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    string str;
    cin >> str;
    int zero=0;
    int one=0;
    int n=str.size();
    for(int i{0};i<n;i++){
        if(str[i]=='0'){
            zero++;
            one=0;
            if(zero==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }else{
            one++;
            zero=0;
            if(one==7){
                cout<<"YES"<<endl;
                return 0;
            }
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
