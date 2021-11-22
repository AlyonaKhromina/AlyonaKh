#include <iostream>
#include <math.h>

using namespace std;

int main() { 
    setlocale(LC_ALL, "Russian");
 int A;
cout<<"Введите A (от 1 до 999) "<<endl;
cin>>A;

if ((A<10) and (A>=1)) {
    if (A%2==0){
        cout<<"Число А однозначное и четное";
    }
    else {
        cout<<"Число А однозначное и НЕчетное";
    }
}
else if ((A<100) and (A>=10)) {
    if (A%2==0){
        cout<<"Число А двухзначное и четное";
    }
    else {
        cout<<"Число А двухзначное и НЕчетное";
}
}
else if ((A<1000) and (A>=100)) {
    if (A%2==0){
        cout<<"Число А трёхзначное и четное";
    }
    else {
        cout<<"Число А трёхзначное и НЕчетное";
}
}

else {
    cout<<"Введенное значение не соответствует запросу!!";
}
}