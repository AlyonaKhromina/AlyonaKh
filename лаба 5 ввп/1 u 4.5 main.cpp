#include <iostream>
#include <math.h>

using namespace std;

int main()
{
double x1, x2, y1, y2, S, P, L, a, b;
cout<<"Введите x1="<<" ";
cin>>x1;
cout<<"Введите x2="<<" ";
cin>>x2;
cout<<"Введите y1="<<" ";
cin>>y1;
cout<<"Введите y2="<<" ";
cin>>y2;

L=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
a=abs(x2-x1);
b=abs(y2-y1);
P=(a+b)*2;
S=a*b;

cout<<" расстояние между отрезками = "<<L<<endl<<" площадь = "<<S<<endl<<" периметр = "<<P;
}