#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n), b, c;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        if (*max_element(a.begin(), a.end()) == *min_element(a.begin(), a.end())) {
            cout << -1 << endl;
            continue;
        }

        b = a;
        long long m = *max_element(b.begin(), b.end());

        for (int i = 0; i < n; i++) {
            if (a[i] == m) {
                c.push_back(a[i]);
            }
        }

        for (int i = 0; i < (int)b.size(); i++) {
            bool divisible = false;
            for (int j = 0; j < (int)c.size(); j++) {
                if (b[i] % c[j] == 0) {
                    divisible = true;
                    break;
                }
            }
            if (divisible) {
                b.erase(b.begin() + i);
                i--;
            }
        }

        cout << b.size() << " " << c.size() << endl;

        for (auto it : b) {
            cout << it << " ";
        }

        for (auto it : c) {
            cout << it << " ";
        }

        cout << endl;
    }

    return 0;
}
