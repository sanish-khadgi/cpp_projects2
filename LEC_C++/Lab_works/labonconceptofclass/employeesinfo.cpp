//WAP to define a class named employee with it's data member ID, Name and salary. Read records of five employees and display the record in tabular form [Hints- to make the data display in tabular form, use "/t"(escape sequence) for line spaces 
#include<iostream>
using namespace std;

class Employee{
    string name;
    int id;
    double salary;

    public:
    void input(){
        cout<<"Enter the employee's name:";//attributes
        cin>>name;

        cout<<"Enter the employee's ID:;";
        cin>>id;

        cout<<"Enter the salary of employee's:";
        cin>>salary;
    }
    void display(){
        cout<<"Name:\t"<<name<<"\nID:"<<id<<"\nSalary"<<salary;
    }
};
int main(){
    Employee e[5];
    for(int i=0;i<5;i++){
        e[i].input();
    }
    cout<<"Name:\t"<<"ID no.:\t"<<"Salary:";
    for(int i=0; i<5; i++){
        e[i].display();
        }
        return 0;
}