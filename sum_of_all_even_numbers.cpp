#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Please enter the number : ";
    cin>>n;
    int i= 2;
    int sum=0;

    while(i<=n){
        sum=sum+i;
        i=i+2;

    }

    cout<<"The value of the problem is : "<<sum<<endl;
}