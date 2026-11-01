#include <iostream>

using namespace std;
int main()
{   
    int t;cin>>t;
    while(t--){
        long long n;cin>>n;
        long long k=1;
        long long sum =0;
        
        while(k<=n){
            sum+=k;
            k*=2;
            
        }
        cout<<n*(n+1)/2 -(2*sum)<<endl;
        
    }
    return 0;
}
