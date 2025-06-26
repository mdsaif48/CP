#include<bits/stdc++.h>
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
        int count=0;
        for(int i = 0; i < n; i++) {
            if (a[i]%2==1) {
                count++;
            }
        }
        if (count%2==0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }

        
    }

    return 0;
}
