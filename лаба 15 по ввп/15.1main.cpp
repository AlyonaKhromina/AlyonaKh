#include <iostream>
using namespace std;

void poweraA3(float a, float* b)
{
    *b = a * a * a;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int i;
    
    for (i = 1; i <= 5; ++i) 
    {
        float a;
        cout << "Введите число а: ";
        cin >> a;
        float b;
        poweraA3(a, &b);
        cout <<"Третья степень введенного числа: "<< b << endl;
    }
}