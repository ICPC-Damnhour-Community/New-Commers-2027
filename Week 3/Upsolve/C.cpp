#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
   
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int arr[n][3];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
    }
    int cnt=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[i][j];
        }
        if(sum>=2)cnt++;
    }
    cout<<cnt<<endl;  
}
