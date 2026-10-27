#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;    //254    
    int ones = n%10;  // 4    
    n = n/10; //25    
    int tens = n%10 ; //5    
    cout<<tens<<ones<<'\n';  //54
}
