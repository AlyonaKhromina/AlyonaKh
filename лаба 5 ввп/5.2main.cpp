#include <iostream>
#include <math.h>

using namespace std;

int main()
{
double A, B, C, AC, BC, sum, Y;
cout<<"Введите А"<<" ";
cin>>A;
cout<<"Введите B"<<" ";
cin>>B;
cout<<"Введите C"<<" ";
cin>>C;
AC=C-A;
BC=C-B;
sum=AC+BC;

cout<<"длина АС= "<<AC<<endl<<"длина BC= "<<BC<<endl<<"сумма отрезков= "<<sum;
}