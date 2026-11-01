#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int n;cin>>n;
    int g1=0,g2=0,g3=0,g4=0;
    
    for(int i=0;i<n;i++){
        int x;cin>>x;
        if(x==1)g1++;
        else if(x==2)g2++;
        else if(x==3)g3++;
        else g4++;
    }
    int ans=g4;
    ans+=g3;
    g1-=g3;
    if(g1<0)g1=0;
    // 1 1 1 2 
    ans+=(g2/2);
    if(g2%2){
        g1+=2;
    }


    ans+=(g1+3)/4;
    cout<<ans<<endl;

    return 0;

}
