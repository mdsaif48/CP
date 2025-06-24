#include<vector>
#include <iostream>
#include<algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<long long>b=a;
        sort(b.begin(),b.end());
        if(k>1 || a==b){
            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;

    }
    return 0;
}
    
    
    // Write C++ code here
   
