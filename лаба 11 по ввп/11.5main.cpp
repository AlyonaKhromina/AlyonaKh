#include <iostream>
#include <math.h>

using namespace std;

int main() { 
    setlocale(LC_ALL, "Russian");
 int A;
cout<<"Введите A: "<<endl;
cin>>A;

if (A>0) {
    if (A % 2==0) {
    cout<<"число А положительное и четное";
    }
    else {
        cout<<"число А положительное и НЕчетное";
    }
}

else if (A<0){
 if (A % 2==0) {
    cout<<"число А отрицательное и четное";
    }
    else {
        cout<<"число А отрицательное и НЕчетное";
    }
    
}
else if (A=0){
    cout<<"число А равно нулю";
    }
}
