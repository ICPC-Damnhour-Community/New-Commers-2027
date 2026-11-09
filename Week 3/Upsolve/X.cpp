#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
        string s;cin>>s;
        int n=s.length();
        string ans="";ans+=s[0];
        
        for(int i=1;i<n;i+=2){
            ans+=s[i];
        }
        cout<<ans<<endl;
    }
}
