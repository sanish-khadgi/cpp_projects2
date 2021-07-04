//Bitwise opertions

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
unsigned int a=3; // 3=0011
unsigned int b=7; // 7=0111
unsigned int c;

c=a&b;//(c=3&7 or, c= 0011 & 0111 =0011 i.e. =3)//"&" operator(bitwise AND operator)
cout<<c<<endl;

c=a|b;//(c=3|7 or, c= 0011 | 0111 =0111 i.e. =7)//"|" operator(bitwise OR operator)
cout<<c<<endl;

c=~b;//(c=~7 or, c= ~ 0111 = 1000 i.e. =8 )// "~" operator(bitwise NOT operator)
cout<<c<<endl;

c=a^b;//(c=3^7 or c= 0011 ^ 0111 =0100 i.e. =4)// "^" operator(bitwise XOR operator)
cout<<c<<endl;

//{rules},tail position are filled with "0" and leading "0" are truncated
//(c=3<<7, means left shifted 3 by 7 bits, i.e. 3= 0011 now, shifted left by 7 bits 0001 1000 0000 i.e. 384 in decimal)
                                                                                   //  7 6543 21)bits               
c=a<<b;//(c=3<<7 or c=3*pow(2,7) =384)"<<" operator (left shift operator)
cout<<c<<endl;

//{rules},leading position are filled with "0" and tail position are truncated
//(c=3>>1, means right shifed 3 by 1 bits, i.e. 3= 0011 now, shifted right by 1 bits =0001 ((1)000  this one is truncated so the ans =1)
c=3>>1;//formulawise c=3/pow9(2,1) =1.5 since (int) the output is 1)
cout<<c<<endl;

return 0;
}