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
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        bool found=false;
        int ans=-1;
        int prefix=0;
        for(int i{0};i<n;i++){
            if(vec[i]==2){
                prefix++;
            }
            int suffix=0;
            for(int j{i+1};j<n;j++){
                if(vec[j]==2){
                    suffix++;
                }
            }
            if(prefix==suffix){
                ans=i;
                found=true;
                break;
            }
        }
        if(found){
            cout<<ans+1<<endl;
        }else{
            cout<<-1<<endl;
        }
        

        t--;
    }
    return 0;
}
