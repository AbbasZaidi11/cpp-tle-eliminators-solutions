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
        int even_no=0;
        int odd_no=0;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            if(temp%2==0){
                even_no+=1;
            }else{
                odd_no+=1;
            }
        }
        if(even_no%2==0 && odd_no%2==0){
            cout<<"YES"<<endl;
        }else if(odd_no%2==0){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }

        t--;
    }
    return 0;
}
