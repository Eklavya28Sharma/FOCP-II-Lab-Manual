#include<iostream>
using namespace std;

bool isprime(int n){
    int flag=0;
    for(int i=2;i<n/2;i++){
        if(n%i==0) {flag=1;}
        else flag=0;
        if(flag==0) return false;
        else return true;
    }
}
int main(){
    int A;
    cout<<"Enter number:";
    cin>> A;

    if(isprime(A)){
         cout<<"Prime";
    }
    else cout<<"Not Prime";
    return 0;
}
