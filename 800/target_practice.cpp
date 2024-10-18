#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t) {
        ll sum=0;
        vector<vector<char>>vec(10,vector<char>(10,'.'));
        for(int i{0};i<10;i++){
            for(int j{0};j<10;j++){
                char ch;
                cin>>ch;
                vec[i][j]=ch;
            }
        }
        for(int i{0};i<10;i++){
            for(int j{0};j<10;j++){
                if(vec[i][j]=='X'){
                    if (i == 0 || j == 0 || i == 9 || j == 9) {
                        sum += 1;
                    } else if (i == 1 || i == 8 || j == 1 || j == 8) {
                        sum += 2;
                    } else if (i == 2 || i == 7 || j == 2 || j == 7) {
                        sum += 3;
                    } else if (i == 3 || i == 6 || j == 3 || j == 6) {
                        sum += 4;
                    } else if (i == 4 || i == 5 || j == 4 || j == 5) {
                        sum += 5;
                    }
                }
            }
        }
        cout<<sum<<endl;
    
        t--;
    }
    return 0;
}
