#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	double A, n, x;
	cout<<"Введите A =";
	cin>>A;
	n=pow(A, 3) * pow(A, 3) * pow(A, 3);
	x=n * pow(A, 3) * pow(A, 3);
	cout<<"Ответ = "<<x;



}