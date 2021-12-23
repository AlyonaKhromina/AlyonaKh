#include <iostream>
using namespace std;
double Fact2(int x)
{
    double p;
    int j, i;
    if (x % 2 == 0)
    {
        p = 1;
        for (i = 0, j = 2; i != x; i+=2)
        {
           
            p = p * (double)j;
             j += 2;
        }
    }
    if (x % 2 != 0)
    {
        p = 1;
        for (i = 1, j = 1; j < x; i++)
        {
            j += 2;
            p = p * (double)j;
        }
    }
    return p;
}
int main () {
    double n;
    cout << "Введите число возводимое в Fact2:";
    cin >> n;
    cout << Fact2(n) << endl;
}
