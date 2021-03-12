#include<iostream>
#include<ostream>
#include<cmath>

using namespace std;
int fact(int n);
int main()
{
    int result,n;
    cout<<"ENTER A NUMBER : ";
    cin>>n;
    cout<<endl<<"n="<<n<<endl;
    result=fact(n);
    cout<<"n ! = "<<result;

}
int fact(int n )
{
    if(n==0)
    return 1;
    else
    return n*fact(n-1);
    
}
