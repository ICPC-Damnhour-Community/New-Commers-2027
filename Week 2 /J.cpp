#include <bits/stdc++.h>
using namespace std;


int main() 
{
    double n;cin>>n;
    int digit=int(n*10.0)%10;
    
    if(digit<=2){
        cout<<int(n)<<"-"<<endl;
    }else if(digit<=6){
        cout<<int(n)<<endl;
    }else {
        cout<<int(n)<<"+"<<endl;
    }
    return 0;

}
