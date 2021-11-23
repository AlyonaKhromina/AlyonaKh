#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
	int A;
	cout<<"Введите целое положительное A: "<<endl;
	cin>>A;

	if ((A%2==0) and (A>9) and (A<100))	{
		cout << "Данное число является четным и двузначным";
	}
	else
	{
		cout << "Данное число НЕ является четным и двузначным";
	}
}