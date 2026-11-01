#include <iostream>
using namespace std;
int main()
{
    int v,t,s,d ;
    cin >> v>>t>>s>>d;
    if (d >= t*v && d<= s*v ){
        cout << "No";
    }
    else {
        cout << "Yes";
    }

    return 0;
}
