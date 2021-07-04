// area of triangle without funtion declaration 
#include<iostream>
#include<math.h>
#include<conio.h>

using namespace std;

float area_Triangle(float a, float b, float c){/*if main funtion is written at 
last; the function declaration is not needed as there is already the function at
 top as flow of program*/  
float s, area;

s=(a+b+c)/2;

area=sqrt(s*(s-a)*(s-b)*(s-c));


return area;
}

int main(){

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
