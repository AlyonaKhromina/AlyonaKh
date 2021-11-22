#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
    int A, B, C, a, b, c;
cout<<"Введите значение А= ";
cin>>A;
cout<<"Введите значение B= ";
cin>>B;
cout<<"Введите значение C= ";
cin>>C;

if ((A<=B) and (A<=C)) {
  a=B+C;
  cout<<"Сумма наибольших чисел = "<<a;
}
else {
    if ((B<=A) and (B<=C)){
        b=A+C;
        cout<<"Сумма наибольших чисел = "<<b;
    }
    else {
        c=A+B;
        cout<<"Сумма наибольших чисел = "<<c;
    }
    
}
}
