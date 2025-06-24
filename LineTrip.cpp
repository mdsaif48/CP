#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long>c(n+1);
        for(i=0; i < n-1; i++) {
            if (i==0) {
                c.push_back(a[i]);
            }
            else{
                c.push_back(a[i+1] - a[i]);
            
            }
        c.push_back(2*(k-a[n-1]));
        }
    d=max_element(c.begin(), c.end());
    cout<< *d << endl;


    }
    return 0;
}
