#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        map<long long, long long> freq;
        for (long long i = 0; i < n; i++) {
            freq[a[i]]++;
        }
        if(freq.size() > 2) {
            cout << "NO" << endl;
        } else {
            long long freq1=freq.begin()->second;
            long long freq2=freq.rbegin()->second;
            if(freq1==freq2){
                cout << "YES" << endl;
            } else if(n%2==1 && abs(freq1-freq2)==1) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}   