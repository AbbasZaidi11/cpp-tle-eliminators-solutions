#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        string x;
        cin>>x;

        string s;
        cin>>s;

        bool found=false;
        for(int ops{0};ops<=5;ops++){
            if(x.find(s)!=string::npos){
                cout<<ops<<endl;
                found=true;
                break;
            }
            x.append(x);
        }
        if(!found){
            cout<<-1<<endl;
        }

        
    }
    return 0;
}
