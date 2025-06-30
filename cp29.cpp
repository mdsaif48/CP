#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n;
        string s;
        cin >> n >> s;

        vector<char> b(s.begin(), s.end()); // Copy string into vector<char>
        long long count = 0;
        bool flag = true;

        long long i = n;
        long long left = 0, right = n - 1;
        while (left <= right) {
            if(b[left] != b[right]) {
                i-=2;
            }
            else {
                break;
            }
            left++;
            right--;
        }
        cout<<i << endl; // Output the value of i
        
            
    }
    return 0;
}
