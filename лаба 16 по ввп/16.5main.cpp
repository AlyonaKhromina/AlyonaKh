#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main () {
    int n;
    vector <int> arr;
    cout << "Введите размер массива n: ";
    cin >> n;
    for (int i = 0; i <= n; i++)
    {
        arr.push_back(i);
    }
    cout << endl << "Числа с нечетными номерами в массиве: ";
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            cout << arr[i] << " ";
        }
    }
    cout << "Числа с чётными номерами в массиве: ";
    for (int i = n; i > 0; i--)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << " ";
        }
    }
}