#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;while(t--){
        int n;
        cin>>n;

        int a[n],b[n+1];

        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<=n;i++)cin>>b[i];
        int sum=0,mn=1e18;
        int last=b[n];bool f=true;

        for(int i=0;i<n;i++){
            sum+=abs(a[i]-b[i]);
            if(last>=min(a[i],b[i])&&last<=max(a[i],b[i])){
                f=false;
            }
            mn = min ({mn,abs(a[i] - last), abs(b[i] - last)});
        }
        cout<<sum+1+((f)?mn:0)<<endl;
    }
}

