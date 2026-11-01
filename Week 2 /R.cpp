#include <iostream>
using namespace std;
int main()
{
    int M,D,y,m,d;
    cin >>M>>D>>y>>m>>d;
    if(D==d){
        if (M==m){
            cout << y+1 <<" " << 1<<" " <<1;
        }
        else {
            cout << y<<" " << m+1 <<" "<< 1;
        }
    }
    else {
        cout << y<<" "<<m<<" "<<d+1;
    }

    return 0;
}
