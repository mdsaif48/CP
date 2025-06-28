#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n; 
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i]; 
        }

        long long c1, c2, count, s;
        c1 = 0;
        c2 = 0; 
        count = 0;
        s = accumulate(a.begin(), a.end(), 0LL); 

        for (int i = 0; i < n; i++) {
            if (a[i] == 1) {
                c1++;
            } else {
                c2++;
            }
        }

        if (c1 > c2) {
            if (c2 % 2 == 0) {
                cout << 0 << endl; 
            } else {
                cout << 1 << endl; 
            }
        } else {
            while (c2 > c1 && s < 0) {
                if (c2 % 2 == 0) {
                    c2 = c2 - 2;
                    c1 += 2;
                    count += 2;
                    s += 2; 
                } else {
                    c2 = c2 - 1;
                    count += 1;
                    c1 += 1;
                    s += 1; 
                }
            }
            cout << count << endl; 
        }
    }
    return 0;
}
