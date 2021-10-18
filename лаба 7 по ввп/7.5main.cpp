
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double A, B, x;
    cout<<"Введите A (А≠0) = ";
cin>>A;
 cout<<"Введите B = ";
cin>>B;

   if (A==0) {
       cout<<"Значение А не удовлетворяет условие"<<endl;
   }
   
   else 
   {
       x=(-B)/A;
       cout<<"x = "<<x;
   }
  
}