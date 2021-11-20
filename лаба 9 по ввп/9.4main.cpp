#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, t1, t2, t, S; 
    cout<<"Введите А= ";
    cin>>A;
    cout<<"Введите B= ";
    cin>>B;
    cout<<"Введите C= ";
    cin>>C;
    
    t1=A/C;
    t2=B/C;
    t=t1*t2;
    S=(A*B)-(C*C*t); 
    
    cout<<"кол-во квадратов, размещенных на прямоугольнике: "<<t<<endl<<"площадь незанятой части прямоугольника: "<<S;
}
