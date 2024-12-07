#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    long long t;
    cin>>t;
    while(t){
        long long n,k;
        cin>>n>>k;
        if(n%2==0){
            cout<<"YES"<<endl;
        }else if(k%2==1){
            cout<<"YES"<<endl;
        
        }else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}
