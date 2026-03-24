#include<iostream>
using namespace std;
class Student {
    int Roll_No;
    string name;
    int marks1,marks2,marks3;
    public:
    void inputDetails() //setter
    {
        cout<<"\n Enter Roll_No,name,marks1,marks2 & marks3:";
        cin>> Roll_No>>name>>marks1>>marks2>>marks3;
    }
    int calculateTotal() //getter
    {
        return(marks1+marks2+marks3);
    }
    void displayDetails() //getter
     {
        cout<<"\n Roll No:"<<Roll_No<<"\n Name:"<<name;
        cout<<"\n Marks1:"<<marks1<<"\n Marks2:"<<marks2<<"\n Marks3:"<<marks3;
        cout<<"\n Total Marks:"<< calculateTotal();
     }
};
int main(){
    Student s1; // s1 is the object or instance of the class
    s1.inputDetails();
    s1.displayDetails();
    return 0;
}