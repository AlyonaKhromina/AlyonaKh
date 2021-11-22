#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
 double a, b, c, x1, y1, x2, y2, x3, y3, AB, AC, B, C;
cout<<"Введите координаты точки A: "<<endl;
cin>> x1>> y1;
cout<< "Введите координаты точки B: "<<endl;
cin>> x2>> y2;
cout<< "Введите координаты точки C: "<<endl;
cin>> x3>> y3;
   AB=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
   AC=sqrt(pow(x3-x1, 2)+pow(y3-y1, 2));

if (AB!=AC) {
    if (AB<AC) {
        cout<<"точка B ближе"<<endl<<"Расстояние от A до B: "<<AB;
    }
    else {
        cout<<"точка C ближе"<<endl<<"Расстояние от A до C: "<<AC;
    }
}
  else {
      cout<<"Расстояние АВ = АС = "<<AB;
  }
}
