#include <iostream>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int N, sec;
    cout<<"Введите N кол-во сек= "<<endl;
    cin>>N;
    
    sec=N % 60;
    
    cout<<"Кол-во секунд, прошедших с начала последней минуты= "<<sec;
}
