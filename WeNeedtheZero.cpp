#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        cin >>n; // Read four long long integers a, b, c, and d
        vector<long long> a(n);
        for (long long i = 0; i < n; i++) {
            cin >> a[i]; // Read n long long integers into the vector a
        }
        
        for(i=1; i < n; i++) {
            a[0]=a[0]^a[i]; // XOR all elements in the vector a with the first element
            
            }
        if (a[0] == 0 && n % 2 == 0) {
            cout<<1 << endl; // If the XOR of all elements is 0 and n is even, print 1
        }
        else if (a[0] != 0 && n % 2 != 0) {
            int i = 1;
            while(a[0]^i!=0){
                i++; // Increment i until the XOR of a[0] and i equals 0
            }
            cout<<i<<endl; // If the XOR of all elements is 0 and n is odd, print 0
        }
        else if(a[0] == 0 && n % 2 != 0) {
            cout<<0 << endl; // If the XOR of all elements is 0 and n is odd, print 0
        }
        

        
    }
    return 0;
}
