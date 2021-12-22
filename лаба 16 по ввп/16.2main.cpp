#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main () {
  int n, a, d, k = 1;
    vector <int> arr;
    cout << "Введите N (>1):";
    cin >> n;
    cout << "Введите первый член А: ";
    cin >> a;
    cout << "Введите знаминатель геометрической прогрессии D: ";
    cin >> d;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    for (int i = 1; i < n; i++)
    {
        arr[i] = a * pow(d, k);
        k++;
    }
    cout << "Геометрическая прогрессия: " <<endl<< a << " "<<endl;
    for (int i = 1; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}