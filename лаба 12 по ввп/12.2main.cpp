#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int b;
    char C;
    cout<< "Введите исходное положение (Север(N), Юг(S), Запад(W), Восток(E)) :"<<endl;
    cin>>C;
    cout<<"Введите команду (ПРОДОЛЖИТЬ ДВИЖЕНИЕ=0, ПОВОРОТ НАЛЕВО=1, ПОВОРОТ НАПРАВО=-1)"<<endl;
    cin>>b;

if (C=='N') {
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
    else if (C=='S') {
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
    else if (C=='W') {
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
    else if (C=='E') {
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
