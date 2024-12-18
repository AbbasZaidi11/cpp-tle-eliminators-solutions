#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
        int n;
        cin>>n;
        priority_queue<int>vec;
        ll sum=0;
        for(int i{0};i<n;i++){
            int temp;
            cin>>temp;
            sum+=temp;
            vec.push(temp);
        }
        ll taken=0;

        while(vec.size() && taken<=(sum-taken)){
            taken=taken+vec.top();
            vec.pop();
        }
        if(taken>(sum-taken)){
            cout<<n-vec.size()<<endl;
        }
        


    return 0;
}
