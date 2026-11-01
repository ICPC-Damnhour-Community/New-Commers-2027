#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int x,y,z,w;
    cin>>x>>y>>z>>w;
    int sum;
    if(x>y&&x>z&&x>w){
        sum=x;
    }else if(y>x&&y>z&&y>w){
        sum=y;
    }else if(z>x&&z>y&&z>w){
        sum=z;
    }else {
        sum=w;
    }
    if(x!=sum)cout<<sum-x<<" ";
    if(y!=sum)cout<<sum-y<<" ";
    if(z!=sum)cout<<sum-z<<" ";
    if(w!=sum)cout<<sum-w<<" ";


    return 0;

}
