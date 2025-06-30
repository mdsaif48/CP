#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n,k;
        cin >> n>>k; 
        if(n%k==0||n%2==0||k==1||(n-k)%2==0 ) {
            cout << "YES" << endl; // If n is divisible by k, or n is even, or k is 1, print YES
        } else {
            cout << "NO" << endl; // Otherwise, print NO
        }
        
    }
    return 0;
}
