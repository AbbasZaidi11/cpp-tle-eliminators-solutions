#include <bits/stdc++.h>
 
using namespace std;
 
#define int long long
 
int32_t main() {
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        vector<int>vec;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        vector<int>ans;
        ans.push_back(vec[0]);
        for(int i{1};i<n;i++){
            if(vec[i]>=vec[i-1]){
                ans.push_back(vec[i]);
            }else{
                ans.push_back(vec[i]);
                ans.push_back(vec[i]);

            }
        }
        cout<<ans.size()<<endl;
        for(auto a:ans){
            cout<<a<<" ";
        }
        cout<<endl;

    }
    return 0;
}
