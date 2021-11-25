#include <iostream>
#include <math.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int K, y;
    cout<<"Введите K (365>K>0)= "<<endl;
    cin>>K;
    
    if ((K<0) and (K>365)) {
    cout<<"К не удовлетворяет услоие!";
    }
    
    else {
       y=K%7 ;
    }
    
    cout<<"номер дня недели для дня K :"<<y;
}
