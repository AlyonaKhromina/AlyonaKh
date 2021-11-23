#include <iostream>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
	int A, B, C;
cout<<"Введите числа A, B, C "<<endl;
cin>>A;
cin>>B;
cin>>C;
cout<<"Выражение A<B<C ";
	
	if ((A<B) and (B<C))
	{
		cout<<"верно ";
	}
	else
	{
		cout<<"ложно ";
	}
}