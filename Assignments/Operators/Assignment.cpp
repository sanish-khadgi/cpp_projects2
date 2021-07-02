//Assiignment operators
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
    auto x=3;
    
    x=3;//"=" operator(equals to; operator)
    cout<<x<<endl;

    x+=5;//(x=x+5 or,x=3+5 =8) //"+=" opeator(addition assignment operator)
    cout<<x<<endl;

    x-=2;//(x=-2 or,x=3-2 =1) //"-=" operator(subtraction assignmen operator)
    cout<<x<<endl;

    x*=4;//(x=x*4 =12) //"*=" operator(mulipication assignment operator)
    cout<<x<<endl;

    x/=1;//(x=x/1 =3) //"/=" operator(division assignment operator)
    cout<<x<<endl;

    x%=2;//(x=x%2 =1) //"%=" operator(modulus assignment operator)
    cout<<x<<endl;

    x&=2;//(x=x&2 =2; solution x=3&2 or,x=0010 & 0011 =0010 i.e. x=2) //"&=" operation(bitwise and and assignment operator)
    cout<<x<<endl;

    x|=4;//(x=x|4 =7; solution x=3|4 or, x=0011 | 0100 =0111 i.e. =7) // "\" operator(bitwise OR and assignment operator)
    cout<<x<<endl;

    x^=2;//(x=x^2 =1; solution x=3^2 or, x=0011 ^ 0010 =0001 i.e. =1) // "^" operator(bitwise XOR and assignment operator)
    cout<<x<<endl;
 
    //shifted 2 bits left eg. 3=0011 = 1100 i.e. =12
    x<<=2;//(x=x<< =12; (formula)= var(x) * 2 ^(power) y; solution x=3*2^2 or, x=3*4 =12 )//"<<" operator(bitwise left shift operator and assignment operator)
    cout<<endl;

    
    x>>=1;//(x=x>> =1; (formula)= var(x) / 2 ^(power) y; solution x=3/2^1 or,x=3/2 = 1.5, (since int) , ans=1) // ">>" operatr(right shifting and assignment operator)
    cout<<x<<endl;
     
    getch();
    
    return 0;
}