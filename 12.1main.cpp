#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
	int d, m;
	string mass[] = {"-", "первое", "второе", "третье", "четвертое", "пятое", "шестое", "седьмое", "восьмое", "девятое", "десятое", "одиннадцатое", "двенадцатое", "тринадцатое", "четырнадцатое", "пятнадцатое", "шестнадцатое", "семнадцатое", "восемнадцатое", "девятнадцатое", "двадцатое", "двадцать первое", "двадцать второе", "двадцать третье", "двадцать четвертое", "двадцать пятое", "двадцать шестое", "двадцать седьмое", "двадцать восьмое", "двадцать девятое", "тридцатое", "тридцать первое"};
	string mass1[] = {"-", "января", "февраля", "марта", "апреля", "мая", "июня", "июля", "августа", "сентября", "октября", "ноября", "декабря"};
	
	cout << "Введите число и месяц" << endl;
	cin >> d >> m;

	if ((d>31 or m>12) or (d==30 && m==2) or (d==31 && m==4) or (d==31 && m==6) or (d==31 && m==9) or (d==31 && m==11)) {
	    cout << "Введённой даты не существует" << endl;
	}
	else {
	cout << mass[d] << " " << mass1[m];
}
}