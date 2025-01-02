#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin >> a >> b;

        vector<int>mpp(27,0);
        for(int i{0};i<a.size();i++){
            mpp[a[i]-'A']++;
        }
        vector<int>mpp1(27,0);
        for(int i{0};i<b.size();i++){
            mpp1[b[i]-'A']++;
        }

        int i=0,j=0;
        while(i<a.size() && j<b.size()){
            if(a[i]==b[j]){
                if(mpp[a[i]-'A']==mpp1[b[j]-'A']){
                    mpp1[b[j]-'A']--;
                    j++;
                }else if(mpp[a[i]-'A']<mpp1[b[j]-'A']){
                    break;
                }
            }
            mpp[a[i]-'A']--;
                i++;
            
        }
        if(j!=b.size()){
            cout<<"NO"<<endl;
        }else{
            cout<<"YES"<<endl;
        }


    }
    return 0;
}
