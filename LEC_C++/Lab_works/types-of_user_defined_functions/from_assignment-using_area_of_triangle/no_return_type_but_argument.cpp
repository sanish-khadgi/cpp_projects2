//Area of triangle using funtion with no return type but argument 
/* no return type mean: "the calling function" does not receive any data from
"the called funtion"  */
#include <iostream>
#include <conio.h>

using namespace std;

void area_Triangle(float height, float base);/*individual data type is required 
inside that bracket*/

int main()

{
    float height, base;

    cout<<"Enter the base: \t";
    cin>>base;

    cout<<"Enter the height: \t ";
    cin>>height;

    area_Triangle(height,base);//argument passed to the function "area_Triangle"

    return 0;
}
void area_Triangle(float height, float base)
{
    float area;

    area=0.5*(height*base);
    
    cout<<"The area of the triangle is: "<<area;
    
    getch();
}