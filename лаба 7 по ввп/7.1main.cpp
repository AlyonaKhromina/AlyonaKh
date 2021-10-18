
#include <iostream>
#include <math.h>

using namespace std;

int main()
{
   double a, y;
    cout<<"Введите значение угла α в градусах (0 < α < 360) =";
cin>>a;

    if ((a<0) or (a>360))
    { cout<<"Значение α не совпадает с условием"<<endl;
    
    }

    else 
    { y=(a*3.14)/180;
    cout<<"Значение угла α в радианах= "<<y;
    }
    
}