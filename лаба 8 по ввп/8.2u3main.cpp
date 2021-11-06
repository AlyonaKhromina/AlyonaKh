#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int A, B, x, y;
    cout<<"введите длину отрезка A и B(при условии A>B)=  "<<endl;
  cin>>A>>B;
 
  if (A<B) {
      cout<<"данные не удовлетворяют условие!!";
  }
 else {
     x=A/B;
     y=A-x*B;
     cout<<"количество отрезков B на отрезке A = "<<x<<endl<<"длина незанятой части отрезка A = "<<y;
 }
}