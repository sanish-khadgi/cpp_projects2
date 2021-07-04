//Use of concept of class with private attributes(data member) and public methods
#include<iostream>
using namespace std;

//create a class
class Room {
    private://private access specifier = can't access by funtion out-side of the class
      double length;
      double breadth;
      double height;

    public:
      double setArea(double len, double bth, double hgt) {
          length = len;  //len is assign to attribute length and so on; means private attributes are accessed indirectly
          breadth = bth;
          height = hgt;
      }

      double calculateArea() {
          return length * breadth;
      }

      double calculateVolume(){
          return length * breadth * height;
      }
};
//outside of class
int main(){
    //create an object of class room
    Room myroom;
    myroom.setArea(42.5, 30.8, 19.2);
    cout<<"The Area of my Room is : "<<myroom.calculateArea()<<endl;
    cout<<"The Volume of my Room is :"<<myroom.calculateVolume()<<endl;

return 0;
}

