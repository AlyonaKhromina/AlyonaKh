
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double a, y;
    cout<<"Введите значение угла α в градусах (0 < α < 2*π) =";
cin>>a;

    if ((a<0) or (a>6.283185))
    { cout<<"Значение α не удовлетворяет условие"<<endl;
    
    }

    else 
    { y=(a*180)/3.14;
    cout<<"Значение угла α в радианах= "<<y;
    }
    
}