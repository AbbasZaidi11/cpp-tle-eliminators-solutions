#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin>>n;
    vector<int>vec;
    for(int i{0};i<n;i++){
        int temp;
        cin>>temp;
        vec.push_back(temp);
    }
    sort(vec.begin(),vec.end());
    for(auto a:vec){
        cout<<a<<" ";
    }
    cout<<endl;
    
    return 0;
}
