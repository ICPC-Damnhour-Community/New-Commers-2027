#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int na,nb;
    cin>>na>>nb;
    int m,k;cin>>k>>m;
    int a[na],b[nb];
    for(int i=0;i<na;i++)cin>>a[i];
    for(int i=0;i<nb;i++)cin>>b[i];
    
    sort(b,b+nb,greater<int>());
    if(b[m-1]>a[k-1]){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   
}
