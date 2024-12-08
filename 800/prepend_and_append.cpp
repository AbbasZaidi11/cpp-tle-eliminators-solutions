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
        deque<char>q;
        for(int i{0};i<n;i++){
            char temp;
            cin>>temp;
            q.push_back(temp);
        }
        while(!q.empty()){
            auto a=q.front();
            auto b=q.back();
            if(a=='1' && b=='0'){
                q.pop_front();
                q.pop_back();
            }
            else if(a=='0' && b=='1'){
                q.pop_front();
                q.pop_back();
            }else{
                break;
            }
        }
        cout<<q.size()<<endl;
        t--;
    }
    return 0;
}
