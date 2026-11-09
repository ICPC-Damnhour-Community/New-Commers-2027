#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;cin>>t;while(t--){
        
        int a , b , c;
        cin >> a >> b >> c;
 
        int size = a + b + c;
        int maxs = max({a , b , c});
        
        if (maxs == a) cout << string (size , 'P') << endl;
        else if (maxs == b) cout << string (size , 'S') << endl;
        else cout << string (size , 'S') << endl;
    
    }
   
}
