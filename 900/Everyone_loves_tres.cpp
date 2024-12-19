#include <iostream>
#include <string>
using namespace std;

string solve(int n) {
    // Base cases
    if (n == 1 || n == 3) {
        return "-1";
    }
    
    // For n = 2, answer is 66
    if (n == 2) {
        return "66";
    }
    
    string result;
    
    // For even numbers (n >= 4), prepend (n-2) 3's to "66"
    if (n % 2 == 0) {
        for (int i = 0; i < n - 2; i++) {
            result += '3';
        }
        result += "66";
    }
    // For odd numbers (n >= 5), prepend (n-5) 3's to "36366"
    else {
        for (int i = 0; i < n - 5; i++) {
            result += '3';
        }
        result += "36366";
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << solve(n) << endl;
    }
    
    return 0;
}
