// *** Arithmetic operator **
#include <iostream>
#include <math.h>
using namespace std;
int main()
{

int a,b;

cout<< "a: ";
cin>> a;

cout<< "b: ";
cin>> b;

int sum=a+b; // "+" operator(addition operator) and "=" operator(equals to operator)
cout<<"addition of a and b: " << sum <<endl;

int sub=a-b; // "-" operator(subtraction operator)
cout<<"subtraction of a and b: " << sub <<endl;

int mul=a*b; // "*" operator(multiplication operator)
cout<<"multiplication of a and b: " << mul <<endl;

int div=a/b; // "/" operator(division operator)
cout<<"division of b from a: " <<div <<endl;

int mod=a%b; // "%" operator(modulus operator)
cout<<"remainder is: " <<mod <<endl;

return 0;
}
