#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n,k;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        k=1;
        long long count_1=0;
        long long count_2=0;
        for(k=1;k<n;k++) {
            for(long long i = 0; i < k; i++) {
                if(a[i] == 2) {
                    count_1++;
                }
            }
            for(long long j = k; j < n; j++) {
                if(a[j] == 2) {
                    count_2++;
                }
            }
            if(count_1 == count_2) {
                cout << k << endl; // If the counts are equal, output "YES"
                break;
            }
            else if((count_1+count_2)%2!=0) {
                cout << -1 << endl; // If the total count is equal to n, output -1
                break;
            }
            else {
                count_1 = 0; // Reset counts for the next iteration
                count_2 = 0;
            }
        }

         

        
    }
    return 0;
}