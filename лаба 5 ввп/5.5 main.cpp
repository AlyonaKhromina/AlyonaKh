#include <iostream>
#include <math.h>

using namespace std;

int main()
{
double x1, x2, y1, y2, x3, y3, S, S1, S2, P, p;
cout<<"Введите x1="<<" ";
cin>>x1;
cout<<"Введите x2="<<" ";
cin>>x2;
cout<<"Введите y1="<<" ";
cin>>y1;
cout<<"Введите y2="<<" ";
cin>>y2;
cout<<"Введите x3="<<" ";
cin>>x3;
cout<<"Введите y3="<<" ";
cin>>y3;

S=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
S1=sqrt(pow((x3-x2),2)+pow((y3-y2),2));
S2=sqrt(pow((x3-x1),2)+pow((y3-y1),2));
p=(S+S1+S2)/2;

P=S+S1+S2;
S=sqrt(p*(p-S)*(p-S1)*(p-S2));

cout<<" P= "<<P<<endl<<" S= "<<S;
}