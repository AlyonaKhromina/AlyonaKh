#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
	int N, K = 0, S = 0;
	cout << "Введите целое значение N (N > 1): "<<endl;
	cin >> N;
	while (S <= N)
	{
		++K;
		S += K;
	}
	cout << "Наименьшее = " << K << endl << "Сумма = " << S << endl;
}