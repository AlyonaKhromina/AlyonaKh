#include <iostream>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int K, N, y;
    cout<<"Введите K (366>K>0)= "<<endl;
    cin>>K;
    cout<<"Введите N (8>N>0)= "<<endl;
    cin>>N;
    
    if ((K<0) and (K>366) and (N>8) and (N<0)) {
    cout<<"Введённые данные не удовлетворяет условие!";
    }
    
    else {
       N = N - 2;
		y = ((K + N) % 7) + 1;
		cout << " Номер дня недели= " << y;
    }

}
