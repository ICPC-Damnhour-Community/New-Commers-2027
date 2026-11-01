#include <bits/stdc++.h>
using namespace std;


int main() 
{
    int n;cin>>n;
    int d=0,a=0;
    for(int i=1;i<=n;i++){
        char c;cin>>c;
        if(c=='A'){
            a++;
        }else{
            d++;
        }
    }
    if(d>a){
        cout<<"Danik"<<endl;
    }else if(a>d){
        cout<<"Anton"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }

    return 0;

}
