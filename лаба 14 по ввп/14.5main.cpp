#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");

	int A, B;
	cout << "Введите числа A и B: "<< endl;
	cin >> A;
	cin >> B;
	while (A != B)
	{
		if (A > B)
		{
			A = A - B;
		}
		else
		{
			B = B - A;
		}

	}
	cout << "Наибольший общий делитель НОД = " << A << endl;
}