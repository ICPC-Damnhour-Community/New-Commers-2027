#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;while(t--){
        string s;cin>>s;

        if(s.length()<=10){
            cout<<s<<endl;continue;
        }
        string ans="";
        ans+=s[0];
        ans+=to_string(s.length()-2);
        ans+=s[s.length()-1];
        cout<<ans<<endl;

    }       
}
