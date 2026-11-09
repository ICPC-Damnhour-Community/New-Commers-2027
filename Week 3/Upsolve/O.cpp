#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;while(t--){
        int n;cin>>n;
        int a[n][n];
        int cnt=1;
        
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=cnt;cnt++;
            }
        }
        
        int mx=-1;
        int dx[]={0,0,1,-1};
        int dy[]={1,-1,0,0};

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                int sum=a[i][j];
                
                for(int k=0;k<4;k++){
                
                    int x=dx[k]+i,y=dy[k]+j;
                    if(x>=0&&x<n&&y>=0&&y<n){
                        sum+=a[x][y];
                    }
                }
                mx=max(sum,mx);
            }
        }
        cout<<mx<<endl;
    }
 
}
