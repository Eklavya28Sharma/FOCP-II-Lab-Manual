//An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker. 
//Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and 
//display results.

#include<iostream>
using namespace std;
int main(){
    int employ,salary;
    cout<<"Enter the number of employees:";
    cin>>employ;

    cout<<"Enter the salary:";
    cin>>salary;

    float bonus,netsalary;
    bonus= salary*0.12;
    netsalary= salary + bonus;
    cout<<"bonus:"<<bonus<<endl<<"netsalary:"<< netsalary;

}

