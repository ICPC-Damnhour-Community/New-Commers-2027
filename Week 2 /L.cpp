#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int x,a,b;cin>>x>>a>>b;
    if(b-a<=0){
        cout<<"delicious"<<endl;
    }else if(b-a>0 && b-a<=x ){
        cout<<"safe"<<endl;
    }else{
        cout<<"dangerous"<<endl;
    }
    return 0;

}
