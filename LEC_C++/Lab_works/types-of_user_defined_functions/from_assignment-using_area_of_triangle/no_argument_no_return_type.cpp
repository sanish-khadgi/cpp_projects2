//area of triangle using funtion with no argument and no return type
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

void area_Triangle();

int main()
{
    area_Triangle();

}
void area_Triangle()
{

float area, a, b, c, s;

cout<<"Enter the side of a triangle"<<endl;

cout<<"Enter the side a: "<<endl;
cin>>a;

cout<<"Enter the side b: "<<endl;
cin>>b;

cout<<"Enter the side c: "<<endl;
cin>>c;

s=((a+b+c)/2);

area=sqrt(s*(s-a)*(s-b)*(s-c));

cout<<"The area of the triangle is:\t"<<area;

getch();
}




