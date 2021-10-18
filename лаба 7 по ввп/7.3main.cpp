
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   int X, A, Y, f, f1;
    cout<<"Введите кол-во кг X =";
cin>>X;
 cout<<"Введите стоимость X кг =";
cin>>A;
cout<<"Введите кол-во кг-1 =";
cin>>Y;
   
   f=A/X; //стоимость 1кг
   cout<<"Стоимость 1 кг конфет= "<<f<<endl;
   
   f1=(1+Y)*f; 
   
    cout<<"Стоимость заданного кол-ва кг конфет= "<<f1;
}