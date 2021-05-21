#include<iostream>
#include<ostream>
#include<cstring>

using namespace std;
class string_fun
{
private :
    char a[20],b[20],c[40];
 public:
    string_fun(char *m,char *n)
    {
        int i=0;
        while (m[i]!='\0')
        {
            a[i]=m[i];
            i++;
        }
        a[i]=0;
        i=0;
        while(n[i]!='\0')
        {
            b[i]=n[i];
            i++;
        }  
        b[i]=0;      

    }
    string get_string1()
    {
        return a;
    }
    string get_string2()
    {
        return b;
    }
    string add_getter()
    {
        strcpy(c,a);
        strcat(c,b);
        return c;
    }

    void equate()
    {
        int c;
        c=strcmp(a,b);
        if(c>0)
        cout<<endl<<a<<"STRING A IS GREATER "<<endl;
        else if(c==0)
        cout<<endl<<"BOTH STRINGS ARE EQUAL"<<endl;
        else
        cout<<endl<<b<<"STRING B IS GREATER "<<endl;

    }
};

int main()
{
    char m[20],n[20];
    cout<<endl<<"Enter Your String A :";
    gets(m);
    cout<<endl<<"Enter Your String B :";
    gets(n);

    string_fun str(m,n);
    int a=0;
    while(a!=5)
    {
        cout<<endl<<" CHOOSE AN OPERATION TO BE PERFORMED ";
        cout<<endl<<"1. ADD STRINGS ";
        cout<<endl<<"2. COMPARE STRINGS ";
        cout<<endl<<"3. DISPLAY STRING ";
        cout<<endl<<"4. EXIT ";

        cout<<endl<<"Your Input : ";
        cin>>a;
        switch (a)
        {
        case 1:  
           cout<<endl<<"THE RESULTANT STRING IS :";
           cout<<str.add_getter();
        break;

        case 2:
           str.equate();
        break;

        case 3:
           cout<<endl<<"STRING A IS : "<<str.get_string1()<<endl;
           cout<<endl<<"STRING B IS : "<<str.get_string2()<<endl;
        break;

        case 4:
           return 0;
        
        
        }
    }

    return 0;
}