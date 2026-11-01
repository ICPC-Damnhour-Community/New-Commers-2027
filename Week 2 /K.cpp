#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>=b && c>=b){
        cout<<a+c<<endl;
    }else if(a>=c && b>=c){
        cout<<a+b<<endl;
    }else{
        cout<<c+b<<"\n";
    }
    return 0;

}
