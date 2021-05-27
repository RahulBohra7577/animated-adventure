#include<iostream>
#include<ostream>
#include<cstring>

using namespace std;

class room
{
    private :
         double length;
         double height;

    public :
         room()
         {
             length=10.12;
             height=12.47;
         }

         double getArea()
         {
             cout<<length*height;
             return 0;
         }

          room(room &obj)
         {
             length=obj.length;
             height=obj.height;
         }

         double calculateArea()
         {
             return length*height;
         }

         room(double len,double hgt)
         {
             length=len;
             height=hgt;
         }

          
      
};

int main()
{
    room room1,room3(18.423,17.873);
    cout<<"AREA OF ROOM NO 1 :";
    room1.getArea();

    cout<<endl;
    room room2=room1;
    cout<<"AREA OF ROOM NO 2 :";
    room2.getArea();

    cout<<endl;
    cout<<"AREA OF ROOM NO 3 :";
    room3.getArea();


    return 0;
}