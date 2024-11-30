#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++) {
            int temp;
            cin >> temp;
            vec.push_back(temp);
        }        
        sort(vec.begin(), vec.end());
        if (vec.back() == vec[0]) {
            cout << "-1" << endl;
            continue;
        } else {
            int it = 0;
            while (vec[it] == vec[0]) {
                it++;
            } 
            cout << it << " " << n - it << endl;
            for (int j = 0; j < it; j++) {
               cout << vec[j] << " ";
            }
            cout << endl;
            for (int j = it; j < n; j++) {
                cout << vec[j] << " ";
            }
            cout << endl;
        }
    }
    
    return 0;
}
