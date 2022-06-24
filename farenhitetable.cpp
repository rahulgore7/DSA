#include<iostream>
using namespace std;
int main(){
    int start, end, step;
    cout <<"Please enter the starting number : ";
    cin >> start; 
    cout <<"Please enter the ending number : ";
    cin >> end; 
    cout <<"Please enter the stepping number : ";
    cin >> step; 

    int i,cel;
    for(i=start;i<=end;i=i+step){
        cel=((i-32)*5)/9;
        cout<<i<<" "<< cel<<endl;
    } 

}