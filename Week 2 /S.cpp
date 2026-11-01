
#include <iostream>
#include <cmath>
using namespace std;
int main()
{   
    int var,row,col;
    for (int i =1;i<=5;i++){
        for (int j=1;j<=5;j++){
            cin>>var;
            if (var == 1){
                row = i;
                col = j;
            }
        }
    }
    
    int row_move = abs(row - 3);
    int col_move = abs(col - 3);
    cout <<row_move+col_move;
    return 0;
}
