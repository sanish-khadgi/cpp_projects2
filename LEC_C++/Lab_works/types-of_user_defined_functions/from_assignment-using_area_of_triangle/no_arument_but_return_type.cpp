//area of triangle using funtion with no argument and return type
/*no argument mean "the called function" does not received any data 
from "the calling function"*/
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

float area_Triangle();

int main()
{
    float area;

    area=area_Triangle();/*Is this a function call?/*the whole function
     "area-Triangle()" is assign to "area"*/

    cout<<"area of the triangle is:\t"<<area; /*is this area is from fuction call
    or answer (function beloe)*/

    getch();

    return 0;
}

float area_Triangle()
{
    
    float a, b, c;

    cout<<"Enter the side of a triangle"<<endl;

    cout<<"Enter the side a: "<<endl;
    cin>>a;

    cout<<"Enter the side b: "<<endl;
    cin>>b;

    cout<<"Enter the side c: "<<endl;
    cin>>c;

    float area, s;

    s=((a+b+c)/2);

    area=sqrt(s*(s-a)*(s-b)*(s-c));

    return area;/*compulsary to return value to main function else return "nan" in
     "area"  ,,,,    if we put return 0; area=0 no matter a,b,c;*/


}




