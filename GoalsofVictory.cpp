#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n ;
        vector<long long> a(n-1);
        for (long long i = 0; i < n-1; i++) {
            cin >> a[i];
        }
        auto b=0;
        for (long long i = 0; i < n-1; i++) {
            b += a[i];
        }
       cout<< -b<< endl;
    }
    return 0;
}
