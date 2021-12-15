#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
	int A, B;
	cout << "Введите два положительные числа A и B (A > B): "<< endl;

	cin >> A;
	cin >> B;
	while ((A - B) >= 0)
	{
		A = A - B;
	}
	cout << "Не занятая часть: " << A << endl;
}