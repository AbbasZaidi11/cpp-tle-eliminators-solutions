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
        int total_xor=0;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            total_xor=total_xor^temp;
            vec.push_back(temp);
        }
        if(n%2==0){
            if(total_xor==0){
                cout<<0<<endl;
            }else{
                cout<<-1<<endl;
            }
        }else{
            cout<<total_xor<<endl;
        }
        t--;
    }
    return 0;
}
