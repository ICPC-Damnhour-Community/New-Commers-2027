#include <iostream>

using namespace std;
int main()
{   
    long long t,sx,sy,ex,ey;
    cin>>t>>sx>>sy>>ex>>ey;
    long long x=(ex-sx),y=(ey-sy);
    char c;long long ans=-1;
    for(int i=0;i<t;i++){
        cin>>c;
        if(c=='E'){
            if(x>0){
                x--;
            }
        }else if(c=='W'){
            if(x<0){
                x++;
            }
        }else if(c=='N'){
            if(y>0){
                y--;
            }
        }else if(c=='S'){
            if(y<0){
                y++;
            }
        }
        if(x==0&&y==0&&ans==-1){
            ans=i+1;
        }
    }
    cout<<ans<<endl;
    return 0;
}
