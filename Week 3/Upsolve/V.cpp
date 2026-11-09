#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;while(t--){
        int n;
        cin>>n;
        string s;cin>>s;
        string a=s;
        sort(s.begin(),s.end());
        if(s==a){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }   
}
