//funtion with no argument and no return value
/*so it doesn't give any return valule as well doesn't take any argument; hence
 'main' funtion is used just for call a function */ 
#include<iostream>
#include<conio.h>
 
using namespace std;

void even();/*funtion declaration//here return type is void = no value was
 returned and '()' after "even" shows number of argument is zero i.e. no 
 argument was passed to 'even'*/

int main(){

    even();/*'functoin call' ->only in main funtion and everythings else are
     done in user-define function*/
}
void even(){//user define function 

 int num;
      
    cout<<"Enter the positive number";
    cin>>num;

    if ((num % 2) == 0){

    cout<<num<<"\t is an even number ";
    }
    else{

    cout<<num<<"\t is an odd number";
    };
    getch();
}
