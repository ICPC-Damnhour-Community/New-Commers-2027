#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
    
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;cin>>s;
    int k;cin>>k;
    int n=s.length();
    for(int i=0;i<k;i++){
        string curr="";
        for(int j=i;j<n;j+=k){
            curr+=s[j];
        }
        sort(curr.begin(),curr.end());
        int indx=0;
        for(int j=i;j<n;j+=k){
            s[j]=curr[indx];indx++;
        }
        
    }
    cout<<s<<endl;

   
        
   
}

