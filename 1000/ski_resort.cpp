#include <iostream>
#include <vector>
using namespace std;

long long countSubarrays(int n, int k, int q, vector<int>& a) {
    long long totalWays = 0;
    int validDays = 0;

    for (int i = 0; i < n; ++i) {
        if (a[i] <= q) {
            validDays++;
        } else {
            if (validDays >= k) {
                long long extraDays = validDays - k + 1;
                totalWays += extraDays * (extraDays + 1) / 2;
            }
            validDays = 0;
        }
    }

    // Check the last segment
    if (validDays >= k) {
        long long extraDays = validDays - k + 1;
        totalWays += extraDays * (extraDays + 1) / 2;
    }

    return totalWays;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k, q;
        cin >> n >> k >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        cout << countSubarrays(n, k, q, a) << endl;
    }

    return 0;
}
