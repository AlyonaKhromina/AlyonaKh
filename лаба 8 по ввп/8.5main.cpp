#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, x1, x2, x3;
    cout<<"введите трёхзначное число = ";
  cin>>A;
 
  if ((A>100) and (A<1000)) {
     x1= A/100;
     x2= A-(x1*100);
     x3= (x2*10)+x1;
     cout<<x3;
  }
 else {
      cout<<"данные не удовлетворяют условие!!";
 }
}