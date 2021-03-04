
/*  WPA TO READ A MATRIX OF SIZE M*N FROM THE KEYBOARD AND DISPLAY THE SAME USING FUNCTION.*/



#include <iostream>
#include<ostream>

Using namespace std;
Int main()
{
  Int a[100][100],m,n,i,j;
          
  Cout<<”Enter the value of m :";
  Cin>>m;
  Cout<<”Enter the value of n :”;
  Cin>>n;
  Cout<<”\n Enter elements of the matrix :\n”;
  For(i=0;i<m;i++)
    {
       For(j=0;j<n;j++)
          Cin>>a[i][j];
     }
   Cout<<”the matrix is :\n”;
   For(i=0;i<m;i++)
     {
       For(j=0;j<n;j++)
       Cout<<a[i][j]<<”   “;
       Cout<<”\n”;
      }

    return 0;

}


