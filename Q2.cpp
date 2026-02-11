//An architect wants to calculate the space covered by a circular fountain. Implement a solution to compute 
//the area of a circle. 

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int radius;
    double pi = M_PI;
    cout<<"Enter the radius of the circle:";
    cin>>radius;
    float Area= M_PI*pow(radius,2);
    cout<<"Area of fountain is:"<<Area;
    return 0;
}