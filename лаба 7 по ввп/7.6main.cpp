
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int A1, A2, B1, B2, C1, C2, b, b1, b2, x, y;
    cout<<"Введите A1 = ";
cin>>A1;
    cout<<"Введите A2 = ";
cin>>A2;
    cout<<"Введите B1 = ";
cin>>B1;
    cout<<"Введите B2 = ";
cin>>B2;
    cout<<"Введите C1 = ";
cin>>C1;
    cout<<"Введите C2 = ";
cin>>C2;

b=A1*B2-B1*A2;
b1=C1*B2-B1*C2;
b2=A1*C2-C1*A2;
x=b1/b;
y=b2/b;

cout<<"х= "<<x<<endl<<"y= "<<y;
   }
