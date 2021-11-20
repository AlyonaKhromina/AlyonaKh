#include <iostream>
#include <math.h>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
int A, B; 
    cout<<"Введите год: ";
    cin>>A;
    
if (A>=0) {
   if (A % 100 > 0)  {
        B = A / 100 + 1; 
   }
    else {
        B = A / 100;
    }
    cout<<"Век: "<<B;
}
else {
    cout<<"Введённое значение не удовлетворяет условие!!";
}
}
