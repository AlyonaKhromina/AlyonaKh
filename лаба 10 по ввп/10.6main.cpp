#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << "введите стороны треугольника a, b, c:" << endl;
    cin>>a;
    cin>>b;
    cin>>c;
    
if (a*a == b*b+c*c){
    cout << "Треугольник прямоугольный" << endl;
    }
    else {
        if (b*b == a*a+c*c){
            cout << "Треугольник прямоугольный" << endl;
        }
        else {
            if (b*b == a*a+c*c) {
                cout << "Треугольник прямоугольный" << endl;
            }
            else {
                if (c*c == a*a+b*b){
                    cout << "Треугольник прямоугольный" << endl;
                }
                else{
                    cout << "Треугольник НЕ прямоугольный" << endl;
                }
            }
            
        }
    }
}