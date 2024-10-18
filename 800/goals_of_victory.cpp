#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t) {
        int n,k;
        cin>>n>>k;
        bool found=false;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            if(temp==k){
                found=true;
            }
        }
        if(found){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        t--;
        
    }
    return 0;
}
