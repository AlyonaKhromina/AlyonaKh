#include <iostream>
using namespace std;
double Fact2(int x)
{
    double p;
    int j, i;
    if (x % 2 == 0)
    {
        p = 1;
        for (i = 1, j = 0; i < x; i++)
        {
            j += 2;
            p = p * (double)j;
            if (p == x)
            {
                p = p * (double)j;
                return p;
                break;
            }
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
    cout << "Введите число возводимое в Fact2: ";
    cin >> n;
    cout <<"Fact2 ="<< Fact2(n) << endl;
}