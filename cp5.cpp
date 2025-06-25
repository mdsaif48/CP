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
        vector<long long> a_copy = a;
        sort(a_copy.begin(), a_copy.end());
        int b;
        for(int i=1;i<n-1;i++){
            if(a[i-1] < a[i] && a[i+1] < a[i]){
                swap(a[i], a[i+1]);
                
            }
        
    }
    if(a_copy == a){
            cout << "YES" << endl;
        } 
        else {
            cout << "NO" << endl;
        }
        

      
    }
    return 0;
}
 
