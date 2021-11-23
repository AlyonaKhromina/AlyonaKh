#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    double a, b, c;
    cout << " Введите стороны треугольника a, b, c:" << endl;
    cin>>a;
    cin>>b;
    cin>>c;
    cout << " Треугольник с введенными сторонами а, b, c ";

	if ((a+b)>c and (a+c)>b and (b+c)>a) 
	{
		cout << "существует";
	}
	else 
	{
		cout << "не существует";
	}
}