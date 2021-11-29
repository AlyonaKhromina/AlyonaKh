#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int b, C;
    
    cout<< "Введите исходное положение (СЕВЕР=1, ЮГ=2, ЗАПАД=3, ВОСТОК=4)"<<endl;
    cin>>C;
    cout<<"Введите команду (ПРОДОЛЖИТЬ ДВИЖЕНИЕ=0, ПОВОРОТ НАЛЕВО=1, ПОВОРОТ НАПРАВО=-1)"<<endl;
    cin>>b;

if (C=1) {
        if (b==0){
        cout <<"CЕВЕР";
        }
            else if (b==1){
            cout <<"ЗАПАД";
            }
                else if (b==-1){
                    cout <<"ВОСТОК";
                }
                else
                cout<<"Неправильно введена команда!";
}
    else if (C=2) {
        if (b==0){
        cout <<"ЮГ";
        }
            else if (b==1){
            cout <<"ВОСТОК";
            }
                else if (b==-1){
                    cout <<"ЗАПАД";
                }
                else
                cout<<"Неправильно введена команда!";
}
    else if (C=3) {
        if (b==0){
        cout <<"ЗАПАД";
        }
            else if (b==1){
            cout <<"ЮГ";
            }
                else if (b==-1){
                    cout <<"СЕВЕР";
                }
                else
                cout<<"Неправильно введена команда!";
}
    else if (C=4) {
        if (b==0){
        cout <<"ВОСТОК";
        }
            else if (b==1){
            cout <<"СЕВЕР";
            }
                else if (b==-1){
                    cout <<"ЮГ";
                }
                else
                cout<<"Неправильно введена команда!";
}
       else {
            cout<<"Неправильно введенно исходное положение робота!";
}

}
