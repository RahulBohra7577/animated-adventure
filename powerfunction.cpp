#include<iostream>
#include<ostream>
#include<cmath>

using namespace std;
double power(double m,int n);
int main(){
    int n=2;
double raised,m;
cout<<"Enter value of M :";
cin>>m;
cout<<"\n Enter value of N :";
cin>>n;

raised=power(m,n);
cout<<"\nM raised to power N is ="<<raised;

}
double power(double m,int n)
{
    double x;
    x=pow(m,n);

    return x;
}