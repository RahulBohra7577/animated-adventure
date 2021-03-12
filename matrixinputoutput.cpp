#include<iostream>
#include<ostream>

using namespace std;
int mtx_input(int m,int n);
int mtx_output(int m,int n);
int main()
{
    int a[100][100],n,m;
    cout<<"enter value of m :"<<endl;
    cin>>m;
    cout<<"enter value of n :"<<endl;
    cin>>n;
    cout<<"Enterelements of the matrix:"<<endl;
    mtx_input(m,n);
    cout<<"The matrix is :\n";
    mtx_output(m,n);

    return 0;
}
int mtx_input(int m,int n)
{
    int a[100][100];
    int i,j;
    for(i=0;i<m;i++){ 
       for(j=0;j<n;j++)
       cin>>a[i][j];
    }
}
int mtx_output(int m,int n)
{
    int a[100][100];
    int i,j;
    for(i=0;i<m;i++)
    {
    for(j=0;j<n;j++)
    cout<<a[i][j]<<"   ";
    cout<<endl;
    }
}