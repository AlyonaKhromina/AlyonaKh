#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    setlocale(LC_ALL, "Rus");
    int N, i, sum;
    float  A;
    cout<<" Введите степень N : ";
    cin>>N;
    cout<<" Введите вещественное число A : ";
    cin>>A;
    
if (N>0) {
sum=1;
    for (int i=1; i<=N; i++) {
        sum=sum+pow(A,i);
    }
    cout<<" Сумма= "<<sum<<endl;
    }
else {
    cout<<" Введенное значение на удовлетворяет условие";
            }
}