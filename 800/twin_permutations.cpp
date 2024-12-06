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
        vector<int>a;
        int mini=-1e9;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            mini=max(mini,temp);
            a.push_back(temp);
        }
        mini++;
        for(int i{0};i<n;i++){
            a[i]=mini-a[i];
        }
        for(int i{0};i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;

        t--;
    }
    return 0;
}
