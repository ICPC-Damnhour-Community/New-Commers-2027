#include <bits/stdc++.h>
using namespace std;


int main() 
{
    
    
    long long n,k;cin>>n>>k;
    
    long long odd=(n/2)+(n%2);
    
    long long even=n-odd;
    if(k<=odd){
        cout<<(2*k-1)<<endl;
    }else{
        k-=odd;
        cout<<k*2<<endl;
    }
   
    return 0;

}
