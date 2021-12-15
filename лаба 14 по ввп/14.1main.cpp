#include <iostream>

using namespace std;

int main()
{
setlocale(LC_ALL, "Russian");
	int A, B, q;
	cout << "Введите челые значения A и B (A < B): "<<endl;
	cin >> A;
	cin >> B;
	int i = A;
	cout << "Вывод: ";
	for (i; i <= B; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << i << " ";
		}
	}
	cin >> q;
	return 0;
}