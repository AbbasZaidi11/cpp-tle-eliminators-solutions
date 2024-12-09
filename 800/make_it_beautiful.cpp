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
        deque<int>vec;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            vec.push_back(temp);
        }
        
        sort(vec.begin(),vec.end());
        
        vector<int>temp;
        
        while(!vec.empty()){
            temp.push_back(vec.back());
            vec.pop_back();
            if(!vec.empty()){
                temp.push_back(vec.front());
                vec.pop_front();
            }else{
                break;
            }
        }
        
        int prefix=0;
        bool ugly=false;

        for(int i{0};i<n;i++){
            if(temp[i]==prefix){
                ugly=true;
                break;
            }
            prefix+=temp[i];
        }
        if(ugly){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
        for(int i{0};i<n;i++){
            cout<<temp[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
