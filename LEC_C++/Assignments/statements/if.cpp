//WAP to print positive number entered by the user
#include<iostream>

using namespace std;

int main()
{
    int number;

    cout<<"Enter a number: ";
    cin>>number;

    if (number>=0)
    {
        cout<<"You have entered "<<number<<" which is a positive number";
    }
    
}