#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;while(t--){
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)cin>>a[i];
    
    int mx=-1;
    int cnt=0;
    
     for(int i=0;i<n;i++){
        mx=max(a[i],mx);
        if(mx==a[i])
        {
            cnt++;
        }
     }
    cout<<n-cnt<<endl;
   
    }
 
}
