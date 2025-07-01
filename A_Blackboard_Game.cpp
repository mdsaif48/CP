#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin>> n;
        if(n %4  == 0) {
            cout << "Bob"<< endl; // If n is even, output n/2
        } else {
            cout << "Alice" << endl; // If n is odd, output (n+1)/2
        }
        
    }
    return 0;
}