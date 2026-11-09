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
        int cnt=0;
        for(int i=0;i<n;i++){
            int l=i;int r=i;
            while(r<n-1&&a[r]==a[r+1]){
                r++;
            }
            if((l==0||a[l-1]>a[l])&&(r==n-1||a[r+1]>a[r])){
                cnt++;
            }
            i=r;
        }
        if(cnt==1)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }    
   
}

