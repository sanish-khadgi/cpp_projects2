//Relational operators
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <conio.h>
using namespace std;
int main()
{
int a,b;

cout<< "a: ";
cin>> a;

cout<< "b: ";
cin>> b;
    
if (a>b)// ">" operator(greater than; operator)
{
    cout<<"the greatest number is: "<<a<<endl;
}
else if (a>=b)// ">=" operator(greater than or equals to; operator)
{
    cout<<a<<" is greater than or equals to"<<b<<endl;
}
else if (a<b)// "<" operator(less than; operator)
{
    cout<<"the greatest number is: "<<b<<endl;
}
else if (a<=b)// "<=" operator(less than or equals to; operator)
{
    cout<<a<<"is less than or equals to"<<b<<endl;
}
else if (a==b)// "==" operator(equals to; operator)
{
    cout<<"both numbers are equal" <<endl;
}
else if (a!=b)// "not equals to; operator"
{
    cout<<"number are not equal" <<endl;
}
getch();    
return 0;  
}