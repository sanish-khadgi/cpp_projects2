//Use of concept of class with public attributes and methods
#include<iostream>
using namespace std;

//create a class
class room{

 public://public = can access by futions outside of the class too
  double length; //{these
  double breadth;//are
  double height;//data members or attributes}
 
  double calculatearea(){//{these 
     return length * breadth;//are class-
  }
  double calculatevolume(){//funtions
     return length * breadth * height;//or methods}
  }
};
int main(){
    
    //create object of Room class
    room room1;
    //assign values to data members
    room1.length = 42.5;
    room1.breadth = 30.8;
    room1.height = 19.2;
    
    //calculate and display the area and volume of the room
    cout << "Area of the Room = "<<room1.calculatearea()<<endl;
    //{room1=call for atributes}and{calculatearea() = call for class-funtion (not call for variable but for function so "()" is must)}                                   
    
    cout << "Volume of Room = " << room1.calculatevolume()<<endl;
    return 0;
}