#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;cin>>n;
    int days[7];
    for(int i=0;i<7;i++){
        cin>>days[i];
    }

    while(n>0){
        for(int i=0;i<7;i++){
            n-=days[i];
            if(n<=0){
                cout<<i+1<<endl;
                return 0;
            }
        }
    }
}
