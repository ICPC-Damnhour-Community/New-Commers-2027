#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main() 
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;while(t--){
        int n;cin>>n;
        string s;cin>>s;
        int cnt0=count(s.begin(),s.end(),'0');
        cout<<cnt0<<endl;
        for(int i=0;i<n;i++){
            if(s[i]=='0')cout<<i+1<<" ";
        }
        cout<<endl;
    }
}

