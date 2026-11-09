#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n;cin>>n;
        string s;cin>>s;
        
        int indx=0;
        while(indx<n&&s[indx]!='R'){
            indx++;
        }
        
        if(indx==n){
            cout<<0<<endl;
            return 0;
        }
        
        int mx=1;
        int curr=1;
        for(int i=indx+1;i<n;i++){
            if(s[i]=='R'){
                curr++;
            }else{
                mx=max(mx,curr);
                curr=0;
            }
        }
        mx=max(mx,curr);
        cout<<mx<<endl;
    
}
