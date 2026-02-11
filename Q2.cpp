#include<iostream>
using namespace std;
void swapreference(int &a,int &b){ // It changes the a and b variables and it affects change x and y.
    cout<<"In before swap: "<<a<<b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout<<"In after swap: "<<a<<b<<endl;
}
void swap(int a,int b){ // It only changes the a and b variables and does'nt change x and y.
    cout<<"In before swap: "<<a<<b<<endl;
    int temp = a;
    a=b;
    b=temp;
    cout<<"In after swap: "<<a<<b<<endl;
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"in main: "<<x<<y<<endl;
    swap(x,y);
    cout<<"In main: "<<x<<y<<endl;
    swapreference(x,y);
    cout<<"In main: "<<x<<y;
    return -1;
}