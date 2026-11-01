#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int a,b;cin>>a>>b;

    if(a+b>=a-b && a+b>=a*b){
        cout<<a+b<<endl;
    }else if(a-b>=a+b && a-b>=a*b){
        cout<<a-b<<endl;
    } else {
        cout<<a*b<<endl;
    }
    return 0;

}
