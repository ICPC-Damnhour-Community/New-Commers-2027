#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() 
{
 
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n;cin>>n;
    string s;cin>>s;
    int freq[26];
    for(int i=0;i<26;i++){
        freq[i]=0;
    }
    for(int i=0;i<n;i++){
        if(islower(s[i])){
            freq[s[i]-'a']++;
        }else{
            freq[s[i]-'A']++;
        }
    }
    int res=1;
    for(int i=0;i<26;i++){
        if(freq[i]<1){
            res=0;break;
        }
    }
    if(res){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
   
        
   
}

