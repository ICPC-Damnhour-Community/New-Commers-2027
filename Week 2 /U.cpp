#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    
    if (b>=8 && a+b>=15){
        cout << 1;
    }
    else if (b>=3 && a+b>= 10){
        cout << 2;
    }
    else if (a+b>=3){
        cout <<3;
    }
    else{
        cout << 4;
    }
    return 0;
}
