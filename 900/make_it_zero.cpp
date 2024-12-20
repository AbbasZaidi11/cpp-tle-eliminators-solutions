#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>vec;
        ll xor_sum=0;
        bool allZero=true;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            if(temp!=0){
                allZero=false;
            }
            xor_sum=xor_sum^temp;
            vec.push_back(temp);
        }
        if(allZero){
            cout<<0<<endl;
            continue;
        }
        else if(xor_sum==0){
            cout<<1<<endl;
            cout<<1<<" "<<n<<endl;
            continue;
        }else if(n%2==0){
            cout<<2<<endl;
            cout<<1<<" "<<n<<endl;
            cout<<1<<" "<<n<<endl;
        }else{
            cout<<4<<endl;
            cout << 1 << " " << n-1 << endl;
            cout << 1 << " " << n-1 << endl;
            cout << n-1 << " " << n << endl;
            cout << n-1 << " " << n << endl;

        }

    }
    return 0;
}
