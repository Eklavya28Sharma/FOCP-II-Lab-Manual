//A student wants to swap the values of two variables for practising coding basics. 
//Implement a solution to swap two numbers using different techniques. 
#include<iostream>
using namespace std;
int main(){
    int a= 15,b=30;
    int temp;

    temp=a;
    a=b;
    b=temp;

    cout<<"After swapping:\n";
    cout<<"a="<<a<< ",b="<<b<<endl;
    return 0;

}