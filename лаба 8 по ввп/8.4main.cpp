#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, x1, x2;
    cout<<"введите двузначное число = ";
  cin>>A;
 
  if ((A>9) and (A<100)) {
     x1= A/10;
     x2= A-(x1*10);
     cout<<"число, полученное при перестановке цифр = "<<x2<<x1;
  }
 else {
      cout<<"данные не удовлетворяют условие!!";
 }
}