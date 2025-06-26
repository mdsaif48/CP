#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        vector<string> a(10);
        for (int i = 0; i < 10; i++) {
            cin >> a[i];
        }
        int count = 0;
        for (int n = 0; n < 5; n++) {
            for (int i = 0; i < 10; i++) {
                for (int j = 0; j < 10; j++) {
                    if (a[i][j] == 'X') {
                        if (((i == n || i == 9 - n) && (j >= n && j <= 9 - n)) ||
                            ((j == n || j == 9 - n) && (i >= n && i <= 9 - n))) {
                            count += n + 1;
                        }
                    }
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}
