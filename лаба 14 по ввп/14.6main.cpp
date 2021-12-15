#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");

	int N;
	cout << " Введите целое число N>1: "<<endl;
	cin >> N;
	int f = 0, f1 = 1, f2 = 1, K = 2;
	while (f < N)
	{
		++K;
		f = f2 + f1;
		f2 = f1;
		f1 = f;
	}
	cout << " Порядковый номер числа Фибоначчи N: " << K << endl;
}