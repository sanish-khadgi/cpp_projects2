// area of triangle with funtion declaration 
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

float area_Triangle(float, float, float);/*"function declartion" - is needed as 
code execute from top to down ; when a program is run  it goes to "main" function
 -> there is a function call so the function declaraition must be in top*/

int main(){//main function 

    float area, a, b, c, s;

    cout<<"Enter the sides of the triangle";

    cout<<"Side a : ";
    cin>>a;

    cout<<"Side b : ";
    cin>>b;

    cout<<"Side c : ";
    cin>>c;
    
    area=area_Triangle(a, b, c); //funtion call

    cout<<"The area of the triangle is : "<<area;

    getch();

     return 0;
}
float area_Triangle(float a, float b, float c){/* user define function//////
this function is executed in funtion declaration*/

float s, area;

s=(a+b+c)/2;

area=sqrt(s*(s-a)*(s-b)*(s-c));

return area;
}
