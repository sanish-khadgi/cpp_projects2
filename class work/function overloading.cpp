#include <iostream>
using namespace std;
void display (char);
void display (int);
void display (float);
int main()
{
char ch='r';
int inum=43;
float fnum=21.1;
cout<<"charcter function: ";
display(ch);
cout<<"integer function: ";
display(inum);
cout<<"float function:";
display(fnum);
return 0;
}