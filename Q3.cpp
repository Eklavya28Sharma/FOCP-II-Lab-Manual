/* A weather app developer needs to provide both Celsius and Fahrenheit readings. Implement a solution to 
 convert Fahrenheit temperature into Centigrade or vice versa. */

#include<iostream>
using namespace std;
int main(){
int cel,faren;
char uinput;
cout<<"Choose Temperature unit(C or F): ";
cin>>uinput;
if(uinput =='C'){
cout<<"Enter temperature in Celsius: ";
cin>>cel;
float F = (float(9*cel)/5)+32;
cout<<cel<<"Celsius is equals to "<<F<<"Farenheit";
}
else if(uinput =='F'){
cout<<"Enter temperature in Farenheit: ";
cin>>faren;
float C = float(faren-32)*5/9;
cout<<faren<<" Farenheit is equals to "<<C<<" "<<" Celsius";
}
else{
    cout<<"Error";
}
}