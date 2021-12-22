#include <iostream>
using namespace std;

int Quarter(int x, int y)
{
    if ((x > 0) & (y > 0)) {
        return 1;
}
    else if ((x < 0) & (y > 0)) {
        return 2;
}
    else if ((x < 0) & (y < 0)) {
        return 3;
}
    else {
        return 4;
}
}

int main () {
    int x, y;
    cout << "Введите X и Y: ";
    cin >> x >> y;
    cout << "Точка лежит в " << Quarter(x, y) <<" координатной четверти" << endl;
}
