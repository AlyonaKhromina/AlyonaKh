#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main () {
  int n, a, b;
    vector <int> arr;
    cout << "Введите размер массива N (> 2): ";
    cin >> n;
    cout << "Введите первый элемент А: ";
    cin >> a;
    cout << "Введите второй элемент В: ";
    cin >> b;
    for (int i = 1; i <= n; i++)
    {
        arr.push_back(i);
    }
    arr[0] = a;
    arr[1] = b;
    arr[2] = a + b;
    a = a + b;
    for (int i = 3; i < n; i++)
    {
        arr[i] = a * 2;
        a = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " " << endl;
    }
}