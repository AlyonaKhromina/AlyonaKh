#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a, b;
    cout<<"Введите размер файла в байтах=  ";
  cin>>a;
  b=a/1024;
  if (a%1024==0) {
      cout<<"Целое число Кбайт = "<<b;
  }
  else{
      cout<<"Целое число Кбайт = "<<b+1;
  }
}