#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        bool found = false; // Flag to check if a pair is found
        for(long long i = 0; i < n; i++) {
            for(long long j = i + 1; j < n; j++) {
                if(__gcd(a[i],a[j])<=2){
                    found=true;
                // Swap elements to sort the array
                }
            }
        }
        if(found == false) {
            cout << "NO" << endl; // If no such pair is found, output "NO"
        }
        else {
            cout << "YES" << endl; // If such a pair is found, output "YES"
        }


       
    }
    return 0;
    
}
    
