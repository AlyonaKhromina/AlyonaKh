#include <iostream>
using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int N, i, sum;
    cout<<" Введите N =";
    cin>>N;
  
if (N>0) {
    sum=0;
    for (i=1; i<=(2*N-1); i+=2) {
        sum+=i;
        cout<<sum<<endl;
    }
         cout<<" Квадрат N = "<<sum<<endl;  
}
else {
    cout<<" Введенное значение на удовлетворяет условие";
}
}