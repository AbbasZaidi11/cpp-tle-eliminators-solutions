#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin >> n >> k >> x;
        vector<int>ans;
        if(n==1 && x==1){
                cout<<"NO"<<endl;
                continue;
        }else if(k==1 && x==1){
            cout<<"NO"<<endl;
            continue;
        }else if(k==2 && x==1 && n%2!=0){
            cout<<"NO"<<endl;
            continue;
        }
        else if(x!=1){
            ans.resize(n);
            fill(ans.begin(),ans.end(),1);
            cout<<"YES"<<endl;
            cout<<ans.size()<<endl;
            for(auto it:ans){
                cout<<it<<" ";
            }
            cout<<endl;
            continue;
        }else{                
                cout<<"YES"<<endl;
                int rem=n/2;
                if(n%2==0){
                    cout<<rem<<endl;
                    for(int i{0};i<rem;i++){
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }else{
                    cout<<rem<<endl;
                    for(int i{0};i<rem-1;i++){
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }

        }

    }
    return 0;
}
