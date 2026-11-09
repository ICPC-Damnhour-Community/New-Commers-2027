#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s;cin>>s;
    char ans=(islower(s[0]))?char(s[0]-32):s[0];
    
    string res="";res+=ans;
    for(int i=1;i<s.length();i++){
        res+=s[i];
    }
    cout<<res<<endl;  
}
