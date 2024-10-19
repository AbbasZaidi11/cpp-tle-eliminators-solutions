#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t) {
        int n;
        cin>>n;
        vector<int>vec;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        int mini=INT_MAX;
        for(int i{0};i<vec.size();i++){
            mini=min(mini,abs(vec[i]-0));
        }
        cout<<mini<<endl;
        t--;
    }
    return 0;
}
