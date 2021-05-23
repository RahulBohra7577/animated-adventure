#include<iostream>
#include<ostream>
#include<cstring>

using namespace std;
class Time
{
private :
     int hours;
     int minutes;

 public:
     void getTime()
     {
         cout<<"ENTER TIME :"<<endl;
         cout<<"HOURS :";
         cin>>hours;
         cout<<endl<<"MINUTES :";
         cin>>minutes;
     }

     void printTime()
     {
         cout<<endl<<"COURENT TIME IS :";
         cout<<hours<<":"<<minutes;
         cout<<endl;

     }

     void friend(Time T1,Time T2)
     {
         this->minutes=T1.minutes+T2.minutes;
         this->hours=T1.hours+T2.hours+this->minutes/60;
         this->minutes %=60;
         this->hours %=24;
     }

      void putTime()
     {
         cout<<endl<<"TIME AFTER ADD :";
         cout<<hours<<":"<<minutes<<endl;

     }

};

int main()
{
    Time T1,T2,T3;
    T1.getTime();
    T1.printTime();
    T2.getTime();
    T3.friend(T1,T2);
    T3.putTime();

    return 0;
}
