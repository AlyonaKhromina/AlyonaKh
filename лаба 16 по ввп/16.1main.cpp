#include <iostream>

using namespace std;

int main () {
 setlocale(LC_ALL, "Russian");
    int a[100];
    int n;
    cout << "Введите величину массива N: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        a[i] = 1 + i * 2;
    }
    for (int i = 0; i < n; ++i) 
    {
        cout << a[i] << endl;
}
}