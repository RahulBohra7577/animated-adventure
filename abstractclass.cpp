#include<iostream>
#include<ostream>
#include<cstring>

using namespace std;

class shape
{
    public :
    virtual void numberOfSides();
};
class Trapezoid:public shape {
    public :
    void numberOfSides()
    {
        cout<<endl<<"\n\tTRAPEZOID : "<<"  THERE ARE 4 SIDES IN GIVEN GEOMETRICAL FIGURE"<<endl;

    }
};

class Triangle:public shape {
    public :
    void numberOfSides()
    {
        cout<<endl<<"\n\tTRIANGLE : "<<"  THERE ARE 3 SIDES IN GIVEN GEOMETRICAL FIGURE"<<endl;

    }
};

class Hexagon:public shape {
    public :
    void numberOfSides()
    {
        cout<<endl<<"\n\tHEXAGON : "<<"  THERE ARE 6 SIDES IN GIVEN GEOMETRICAL FIGURE"<<endl;

    }
};

int main()
{
    Trapezoid tz;
    Triangle tg;
    Hexagon hx;

    tz.numberOfSides();
    tg.numberOfSides();
    hx.numberOfSides();

    return 0;
}
