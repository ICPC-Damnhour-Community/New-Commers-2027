#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cin >>a>>b;
    
    int h = a+b ;
    if (h>=24){
        cout << h-24;
    }
    else {
        cout << h;
    }
    return 0;
}
