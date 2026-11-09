#include <bits/stdc++.h>
using namespace std;
#define int long long 

signed main() 
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
       string s;cin>>s;
       string t=s+s;
       string mx=s,mn=s;
       int n=s.length();
       for (int i=0;i<n;i++) {
            string curr = t.substr(i, n);
            if (curr<mn) {
                mn=curr;
            }
            if (curr>mx) {
                mx=curr;
            }
        }
        cout<<mn<<endl<<mx<<endl;
}
