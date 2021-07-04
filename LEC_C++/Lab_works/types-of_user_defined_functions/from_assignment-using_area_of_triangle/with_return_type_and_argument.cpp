/*function with return type and argument*/
#include<iostream>
#include<conio.h>

using namespace std;

float area_Triangle(float height, float base)
{
    float area;

    area=0.5*(height*base);

    return area;
}
int main()
{
    float answer, height, base;

    cout<<"Enter the height: \n";
    cin>>height;

    cout<<"Enter the base: \n";
    cin>>base;

    answer=area_Triangle(height,base);/*inputs are passed to this area_Triangle();
    ;; and area_Trianlge() is poured to the answer*/

    cout<<"The area of the triangle is: "<<answer;

    getch();

    return 0;
}
