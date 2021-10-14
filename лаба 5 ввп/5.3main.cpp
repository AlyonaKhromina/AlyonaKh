#include <iostream>
#include <math.h>

using namespace std;

int main()
{
double A, B, C, AC, BC, Y;
cout<<"Введите А"<<" ";
cin>>A;
cout<<"Введите B"<<" ";
cin>>B;
cout<<"Введите C"<<" ";
cin>>C;
if ((A<C and C<B) or (A>C and C>B)) {
AC=C-A;
BC=C-B;

Y=AC*BC;
cout<<"длина АС= "<<AC<<endl<<"длина BC= "<<BC<<endl<<"произведение отрезков= "<<Y;
}


else
{
    cout<<"Вы не правильно ввели условие";
}
}