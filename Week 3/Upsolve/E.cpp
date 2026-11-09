#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;while(t--){
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)cin>>arr[i];

        int cnt=0;
        int mn=arr[n-1];

        for(int i=n-2;i>=0;i--){
                if(arr[i]<=mn){
		                mn=arr[i];
                    
                }else{
	                   cnt++;
                }
        }
        cout<<cnt<<endl;
    }  
}
