#include <bits/stdc++.h>
using namespace std;

// Check if n is divisible by all powers of 10 less than or equal to it
bool isDivisibleByAllPowersOfTen(long long n) {
    long long p = 1;
    while (p <= n) {
        if (n % p == 0) {
            p *= 10;
        } else {
            return false;
        }
    }
    return true;
}

int main() {
    // Precompute all such numbers up to 1e6 (optional)
    vector<long long> validNumbers;
    for (long long x = 1; x <= 1000000; x++) {
        if (isDivisibleByAllPowersOfTen(x)) {
            validNumbers.push_back(x);
        }
    }

    long long t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        // Count how many valid numbers are ≤ n
        int count = 0;
        for (long long val : validNumbers) {
            if (val <= n) {
                count++;
            } else {
                break;
            }
        }
        cout << count << endl;
    }

    return 0;
}
