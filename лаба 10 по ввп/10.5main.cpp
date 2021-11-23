#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int A;
	cout<<"Введите четырёхзначное число A: ";
	cin>>A;

    if ((A%10 ==A/1000) and (A%100/10 ==A%1000/100))
    {
        cout<<"Данное число читается одинаково слева направо и справа налево";
    }
    else
    {
        cout<<"Данное число НЕ читается одинаково слева направо и справа налево";
    }
}