#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
    int A, B;
cout<<"Введите значение А= ";
cin>>A;
cout<<"Введите значение B= ";
cin>>B;

if (A!=B) {
    if (A>B) {
        B=A;
    }
    else {
        A=B;
    }
}
else {
    A=B=0;
}
cout<<"A= "<<A<<endl<<"B= "<<B;



}
