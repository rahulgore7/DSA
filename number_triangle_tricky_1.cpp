#include <iostream>
using namespace std;
int main(){
    int n;
    cin>> n;
    int row= 1;
    while (row<=n){
        int count = row;
        int col = 1;
        while ( col <= row){
            cout << count << "   ";
            count = count - 1;
            col = col + 1;
        }
        cout << endl ;
        row  = row + 1;;
    }
}
// It can also be solved using the formula : (i-j+1)