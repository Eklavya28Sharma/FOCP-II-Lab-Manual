#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the marks of students:";
    cin>>a>>b>>c;
    float avg= float(a+b+c)/3;
    cout<<"the average marks are "<<float(avg);
    return 0;
}