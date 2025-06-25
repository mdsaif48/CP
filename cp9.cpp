#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<long long, long long> subs;
        for(long long i = 0; i < n; i++) {
            subs[a[i]]++;
            }
        for(i=0; i < n; i++) {
            if(subs.find(k)==subs.end()) {
                cout << "NO" << endl;
               
            }
            else{
                cout<< "YES" << endl;
            }
        }
        
}
return 0;
}