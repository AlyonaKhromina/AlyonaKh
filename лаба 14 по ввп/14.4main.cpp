#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");

	float P, S = 1000;
	int K = 1;
	cout << "Введите процент 0<P<25 : "<<endl;
	cin >> P;
	while (S <= 1100)
	{
		++K;
		S += S * P / 100;
	}
	cout << "Количество мясяцев K = " << K << endl << "Итоговый размер вклада S = " << S << " руб "<< endl;
}