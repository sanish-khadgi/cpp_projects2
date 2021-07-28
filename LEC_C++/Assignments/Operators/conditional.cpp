//its a ternary operator
#include<iostream>
int main()
{
    int a,b;
    char c;

    std::cout<<"a:";
    std::cin>>a;
    std::cout<<"b:";
    std::cin>>b;

    c=(a>b)?'p':'f';//conditional operator(if a>b, c=p else c=f)
    std::cout<<"result is: "<<c<<std::endl;

return 0;
}