#include <iostream>
#include <math.h>

using namespace std;

int main(){ 
    setlocale(LC_ALL, "Russian");
 double A, x, y;
cout<<"Введите координаты точки A: "<<endl;
cin>>x>>y;

if ((x>0) and (y>0)){
    cout<<"точка А пренадлежит к 1 координатной четверти";
}
    else if (x<0<y){
        cout<<"точка А пренадлежит к 2 координатной четверти";
    }
    else if ((x<0) and (y<0)){
        cout<<"точка А пренадлежит к 3 координатной четверти";
    }
    else if (x>0>y){
        cout<<"точка А пренадлежит к 4 координатной четверти";
    }
}
