#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d; // Read four long long integers a, b, c, and d

        if (b > d) {
            cout << -1 << endl; // If b is greater than d, print -1
        } 
        else {
            if ((a + d - b) >=c) {
                cout << 2 * (d - b)+a-c << endl; // If a + d - b is greater than c, print 2*(d - b)
            } else {
                cout << -1 << endl; // Otherwise, print -1
            }
        }
    }
    return 0;
}
