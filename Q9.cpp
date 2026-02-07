// A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
// solution to classify the symbol.

#include<iostream>
using namespace std;
int main(){
    char vowel[5]={'a','e','i','o','u'};
    char number[10]={'1','2','3','4','5','6','7','8','9','0'};
    char input;
    cout<<"Enter a character(lowercase):";
    cin>>input;
    int flag=1;
    for(int i=0;i<5;i++){
        if(vowel[i] == input) {cout<<"Vowel";
            flag =0;
        }}
    for (int i=0;i<10;i++){
        if(number[i]==input) {cout<<"Number";
        flag =0;
    }}
    if (flag) cout<<"Constant";
    }