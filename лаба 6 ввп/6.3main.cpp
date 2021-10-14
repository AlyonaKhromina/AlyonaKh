#include <iostream>
#include <math.h>

using namespace std;  //

int main()
{
 double A, B, C, D;
cout<<" Введите А= ";
cin>>A;
cout<<" Введите B= ";
cin>>B;
cout<<" Введите C= ";
cin>>C;

swap(D,A);
swap(A,C);
swap(C,B);
swap(B,D);

cout<<"Вывод А="<<A<<endl<<"Вывод B="<<B<<endl<<"Вывод C="<<C;
}
