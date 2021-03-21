#include<iostream>
#include<ostream>

using namespace std;

inline int display(int num)
{
    cout<<num<<endl;
}
int main()
{
   display(20);  // first function call

   display(25);  // second function call

   display(3973);   // thied function call

    return 0;
}