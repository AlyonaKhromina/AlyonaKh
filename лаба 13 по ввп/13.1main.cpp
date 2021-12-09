#include <iostream>
 
using namespace std;
 
int main()
{
setlocale(LC_ALL, "Rus");
float a, m;
   cout<<"Стоимость 1кг конфет= ";
   cin>>a;

if (a>0) {
    for  (m=0.1; m<1.1; m+=0.1)
    cout<<m<<" кг ="<<a*m<<" руб"<<endl;
}
else {
    cout<<"Введённое значение не удовлетворяет условие";
}
}