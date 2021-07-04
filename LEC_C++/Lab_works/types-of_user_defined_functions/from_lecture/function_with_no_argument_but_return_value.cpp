//funtion with no argument but return value
#include<iostream>
#include<conio.h>

using namespace std;

int even();/*'function declaration' with "int" return value but no argument was
 passed to even(), and 'int even()' returns a certain intiger value */

 int main(){//'main function'
//function 1
 int num;

 num=even(); /*here "num" is assign to "even() user define function" that means
  the value return from the "even()" function is poured to the variable "num" */

 if((num % 2) == 0) { //and further operatios ares carried out in main function

     cout<<"The number is an even";
 }
 else{
     cout<<"The number is an odd";
 }
 getch();
 
 return 0;

}
 
int even()//function 2
{

int n;

cout<<"Enter a positive number";
cin>>n;


return n;
getch();
}