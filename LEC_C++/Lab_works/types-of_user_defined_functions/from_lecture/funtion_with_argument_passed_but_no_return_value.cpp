//funtion with argument passed but no return value
#include <iostream>
#include <conio.h>

using namespace std;

void even(int n);

int main()

{
    int num;

    cout<<"Enter a integer";
    cin>>num;

    even(num);//Argument num is passed to the function eve

    return 0;

}
//there no return value to call the funtion; hence the return type of the funcction is void; 
void even(int n) //and since we have an argument so, the input value obtained from the main function is passed to this function i.e. n=num
{
    if ((n%2)==0)
    {
    cout<<"The entered number is even";
    }
    else{
        cout<<'The entered number is odd';
    }
getch();
}