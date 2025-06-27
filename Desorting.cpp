#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n - 1; i++) {
            b.push_back(a[i + 1] - a[i]);
        }
        long long min_val = *min_element(b.begin(), b.end());
        if (is_sorted(a.begin(), a.end())) {
            cout << min_val / 2 + 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}
