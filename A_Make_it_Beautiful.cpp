#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (*min_element(a.begin(), a.end()) == *max_element(a.begin(), a.end())) {
            cout << "NO" << endl;
        } else {
            sort(a.begin(), a.end());
            cout << "YES" << endl;
            cout << a[n - 1] << " ";
            for (long long i = 0; i < n - 1; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
