#include<iostream>
#include<ostream>
#include<cmath>

using namespace std;

float i;
float j;
float power(float x,int y);
float power(float x,float y);
void display(float ,float);

int main()
{
    cout<<"Enter the base number :";
    cin>>i;
    cout<<"Enter the power :";
    cin>>j;
    display(i,j);
    


    return 0;

}
float power(float x,int y=2){
    return pow(x,y);
}
void display(float ,float ){
    cout<<"Result with default power is = "<<power(i)<<endl;
    cout<<"Result with power "<<j<<" is "<<power(i,j)<<endl;
}
float power(float x,float y){
    return pow(x,y);
}
 