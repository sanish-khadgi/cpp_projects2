//WAP to define a class in C++ as shown : class name- Student attributes - name, roll no., address, percentage; method-input(), display();
#include<iostream>
#include<conio.h>
using namespace std;
 
//creating a class
class student {

     string name;
     int roll_no;
     float percentage;  
     string address;

    public:

     void input(){
      cout<<"Enter Name: ";
      cin>>name;

      cout<<"Enter Roll no.: ";
      cin>>roll_no;

      cout<<"Enter Address";
      cin>>address;

      cout<<"Enter Percentge";
      cin>>percentage;
     
     }
     void display(){
         if(percentage<40){
             cout<<"Name:\t"<<name<<"\nRoll no:\t"<<roll_no<<"\nAddress:\t"<<address<<"\nPercentage:\t"<<percentage<<":Failed";  
         }
         else{
             cout<<"Name:\t"<<name<<"\nRoll no:\t"<<roll_no<<"\nAddress:\t"<<address<<"\nPercentage:\t"<<percentage<<":Passed";   
         }
     }

};

int main(){
    //creating object
    student s1,s2;
    s1.input();
    s2.input();

    s1.display();
    s2.display();
 getch();
 
 return 0;   
}