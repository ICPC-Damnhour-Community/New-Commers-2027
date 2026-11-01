#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int t;
    cin>>t;
    while (t--){
    int target,n;
    int sum =0;
    int max = -1;
        cin>>n;
        max = -1;
        target =2;
        
        for (int i=2;i<=n;i++){
            sum =0;
            for (int j=1;j*i<=n;j++){
                sum += i*j;
            }
            if (sum>max){
                max =sum;
                target = i;
             }
        }
        cout<<target<<endl;
    }
    return 0;
}
