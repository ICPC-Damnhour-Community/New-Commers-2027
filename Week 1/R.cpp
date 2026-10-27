#include <iostream>
using namespace std;
int main()
{
    int t;    
    cin>>t;
    int f_t = t*t + 2*t + 3;
    int f_right = f_t*f_t + 2*f_t + 3;
    int sum_left = f_t + t;
    int f_left = sum_left*sum_left + 2*sum_left + 3;
    int inner_sum= f_right + f_left;
    int f_total = inner_sum*inner_sum + inner_sum*2 + 3;
    cout<<f_total <<'\n';
    
}
