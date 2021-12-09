#include <iostream>
 
using namespace std;
 
int main (){
    setlocale(LC_ALL, "Rus");
    int N, i;
    double a=1;
    cout<<"Введите N>0 = ";
    cin>>N;
   
    if (N>0) {
        for (i=1; i<=N; i++) {
        a=a*(1+0.1*i);
   }
   
    cout<<"Текущее значение = "<<a;
}
    else {
        cout<<"Неверно введено значение!!";
    }
}