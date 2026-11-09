#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;
    while(t--){
            int n;cin>>n;
            int a[n];
            int freq[105];
            for(int i=0;i<105;i++){  
                freq[i]=0;
            }
            for(int i=0;i<n;i++){
                cin>>a[i];
                freq[a[i]]++;
            }
            int mex=-1;
            for(int i=0;i<105;i++){
                if(freq[i]==0){
                    mex=i;break;
                }
            }
            
             cout<<mex<<endl;
        }
}
