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
        int hcf=0;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        bool found=false;
        for(int i{0};i<n;i++){
            for(int j{i+1};j<n;j++){
                if(__gcd(vec[i],vec[j])<=2){
                    cout<<"YES"<<endl;
                    found=true;
                    break;
                }
            }
            if(found){
                break;
            }
        }
        if(!found){
            cout<<"NO"<<endl;
        }

        t--;
    }
    return 0;
}
