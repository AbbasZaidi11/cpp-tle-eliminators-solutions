#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main() {
    ll t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        unordered_map<char, int> mpp; // To count occurrences of '0' and '1'
        for (char c : s) {
            mpp[c]++;
        }

        string ans = "";
        bool np = false; // To track if we need early termination

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '0') {
                if (mpp['1'] > 0) {
                    ans.push_back('1'); // Add '1' to the answer
                    mpp['1']--;
                } else {
                    cout << s.size() - i << endl; // Output remaining characters
                    np = true;
                    break;
                }
            } else { // s[i] == '1'
                if (mpp['0'] > 0) {
                    ans.push_back('0'); // Add '0' to the answer
                    mpp['0']--;
                } else {
                    cout << s.size() - i << endl; // Output remaining characters
                    np = true;
                    break;
                }
            }
        }

        if (np == false) {
            cout << 0 << endl; // If no deletions are needed
        }
    }

    return 0;
}
