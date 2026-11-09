#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        string s;
        cin >>n>> s;
    
        int cnt0 = count(s.begin(),s.end(),'0');
        string res="";
        char c=(cnt0<n)?'0':'1';
        for(int i=0;i<n;i++){
            res+=c;
        }
        cout<<res<<endl;
    }

   
        
   
}

