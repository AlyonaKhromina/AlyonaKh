#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
	int A, B;
	cout<<" Введите числа A и B "<<endl;
	cin>>A;
	cin>>B;

	cout<<" Выражение A>2 и B<=3 ";
	if ((A > 2) and (B <= 3)){
		cout << "верно ";
	}
	else{
		cout << "ложно ";
	}
}