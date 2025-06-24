#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        string s;
        cin >> s;
        long count = 0;
        bool f = false;

        for (int i = 0; i < n; i++) {
            if (i + 2 < n && s[i] == '.' && s[i + 1] == '.' && s[i + 2] == '.') {
                count = 2;
                f = true;
                break;
            }
            else if (s[i] == '.') {
                count++;
            }
        }

        cout << (f ? 2 : count) << endl;
    }
    return 0;
}
