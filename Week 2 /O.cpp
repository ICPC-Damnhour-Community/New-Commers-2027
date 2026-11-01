#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int n;cin>>n;
    char prev=' ';
    int cnt=0;
    for(int i=1;i<=n;i++){
        char c;cin>>c;
        if(c==prev){
            cnt++;
        }else{
            prev=c;
        }
    }
    cout<<cnt<<endl;

    return 0;

}
