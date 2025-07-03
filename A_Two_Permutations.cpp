#include<bits/stdc++.h>
using namespace std;
int main() {
    long long t;
    cin >> t; 
    while (t--) {
        long long n,a,b;
        cin >> n>>a>>b;
        
        if((n-2)>=a+b ||(a==b && a==n)){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

        
         

        
    }
    return 0;
}