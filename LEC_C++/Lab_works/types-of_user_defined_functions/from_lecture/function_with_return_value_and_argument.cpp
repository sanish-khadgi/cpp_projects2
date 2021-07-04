//funtion with return value and argument 
#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

int area_Triangle(float, float, float);/* function declaration;; from 
the structureof function declaration, it accept 3 float type data while working 
and gives a float type data as output  */

int main ()//main function
{
    float a, b, c, area;

    cout<<'Enter the sides of a triangle'<<endl;//these input /
    
    cout<<'Enter side 1: \t';//can be any/
    cin>>a>>endl;

    cout<<'Enter side 2: \t';//where in the program/
    cin>>b>>endl;

    cout<<'Enter side 3: \t';// as it has both return type and argument/ 
    cin>>c>>endl;

    area = area_Triangle(a,b,c);/*function call  ;those input are passed to the
    function call area_Triangle   ,, the vlaue return from area_trangle 
    function will assign to the 'area'*/

    cout<<'The area of the triangle is:\t'<<area;

    return 0;
}
int area_Triangle(float a, float b, float c){//function 2 

float s, area; // this function can be in other file too and 

s = (a+b+c)/2; // can work by importing it here 
area=sqrt(s*(s-a)*(s-b)*(s-c));// the process is called abstraction

getch();

return area;

}