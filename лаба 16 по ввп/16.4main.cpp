#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main () {
  setlocale(LC_ALL, "Russian");
    int n;
    cout << "Введите размер массива n: ";
    cin >> n;
    int* arr = new int[n];
    int s, b, e;
    {
        for (s = 0; s < n; s++)
        {
            cout << "Введите " << s + 1 << " значение массива: ";
            cin >> arr[s];
        }

        b = 0;
        e = n - 1;
        cout << endl;
        while (b <= e)
        {
            cout << arr[b] << " " << endl;
            if (b == e)
                break;
            cout << arr[e] << " " << endl;
            b++;
            e--;
        }

    }
}