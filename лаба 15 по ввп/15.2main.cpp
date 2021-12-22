#include <iostream>
using namespace std;
int Sign(double x)
{
    if (x < 0)
        return -1;
    else if (x == 0)
        return 0;
    else 
        return 1;
}
int main () 
{
    float a, b;
    cout << " Введите числа А и B: ";
    cin >> a >> b;
    cout << " Sign(a) + Sign(b)=  " << Sign(a) + Sign(b) << endl;
}