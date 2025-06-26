#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] < 0) {
            a[i] = -a[i];
        }
    }
    long long j = *min_element(a.begin(), a.end());
    cout << j << endl;
    return 0;
}
