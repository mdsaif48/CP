#include<bits/stdc++.h>
using namespace std;
int main() {
    long long n;
        cin >> n;
        if(n % 2 == 0 && n > 2) {
            cout << "YES" << endl; // If n is even, output n/2
        } else {
            cout << "NO"<< endl; // If n is odd, output (n+1)/2
        } 
    
        
    
    return 0;
}
