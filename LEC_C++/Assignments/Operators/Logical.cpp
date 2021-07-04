#include<iostream>
using namespace std;

int main()
{
    int x=5,y=3;

    cout<< (x>3 && x<10) <<endl;//return (1)true;(both are true);//"&&" operator;("AND" operator)
    
    cout<< (x>3 || y>3 ) <<endl;//return (1)true;(one of the condition is true);//"||" operator("OR" operator)
    
    cout<< (!(x>3)) <<endl;//return (0)false;(the reverse of the condition is not true)//"!" operator("NOT" operator)
    
    return 0;
}