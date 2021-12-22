#include <iostream>
using namespace std;

float RingS(float r1, float r2)
{
    return 3.14 * (r1 * r1 - r2 * r2);
}
int main () {
    float a, b, a1, b1, a2, b2;
    cout << "Введите R1 и R2: ";
    cin >> a >> b;
    if (a < b)
    {
        cout << "Неверно" << endl;
    }
    cout <<" Площадь 1 кольца: "<<RingS(a, b) << endl;
    cout<<"-----------------------------------------"<<endl;
    
    cout << "Введите R3 и R4: ";
    cin >> a1 >> b1;
    if (a1 < b1)
    {
        cout << "Неверно" << endl;
    }
    cout <<" Площадь 2 кольца: "<< RingS(a1, b1) << endl;
    cout<<"-----------------------------------------"<<endl;
    cout << "Введите R5 и R6: ";
    cin >> a2 >> b2;
    if (a2 < b2)
    {
        cout << "Неверно" << endl;
    }
    cout <<" Площадь 3 кольца: "<< RingS(a2, b2) << endl;
}