#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;
    cin>>n;
    string a ="ROYG";
    string b ="BIV";
    for(int i=0;i<n-3;i++)
    {
        cout<<a[i%4];
    }
    cout<<b;
   
}
