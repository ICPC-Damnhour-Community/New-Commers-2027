#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    
    int arr[n];
    int freq[n+1];
    // 1-> n 
    // n-1 
    for(int i=0;i<n;i++){
        freq[i]=0;
    }
    for(int i=0;i<n-1;i++)
    {
        cin>>arr[i];
        freq[arr[i]]=1;
    } 
    int ans=0;
    for(int i=1;i<=n;i++){

        if(freq[i]==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;   
}
