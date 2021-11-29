#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    int C, N;
    cout<< "Введите исходное положение С (СЕВЕР=1, ЮГ=2, ЗАПАД=3, ВОСТОК=4)"<<endl;
    cin>>C;
    cout<<"Введите команду N (ПРОДОЛЖИТЬ ДВИЖЕНИЕ=0, ПОВОРОТ НАЛЕВО=1, ПОВОРОТ НАПРАВО=-1)"<<endl;
    cin>>N;
    
   if ((C=1) or (C=2) or (C=3) or (C=4)) {
    if (C=1) {
        if (N==0){
        cout <<"CЕВЕР";
        }
            else if (N==1){
            cout <<"ЗАПАД";
            }
                else if (N==-1){
                    cout <<"ВОСТОК";
                }
                else
                cout<<"Неправильно введена команда!";
    }
     else if (C=2) {
        if (N==0){
        cout <<"ЮГ";
        }
            else if (N==1){
            cout <<"ВОСТОК";
            }
                else if (N==-1){
                    cout <<"ЗАПАД";
                }
                else
                cout<<"Неправильно введена команда!";
    }
     else if (C=3) {
        if (N==0){
        cout <<"ЗАПАД";
        }
            else if (N==1){
            cout <<"ЮГ";
            }
                else if (N==-1){
                    cout <<"СЕВЕР";
                }
                else
                cout<<"Неправильно введена команда!";
    }
     else if (C=4) {
        if (N==0){
        cout <<"ВОСТОК";
        }
            else if (N==1){
            cout <<"СЕВЕР";
            }
                else if (N==-1){
                    cout <<"ЮГ";
                }
                else
                cout<<"Неправильно введена команда!";
    }
   }
    else {
        cout<<"Неправильно введенно исходное положение робота!";
}
}