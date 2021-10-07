#include <iostream>
#include <math.h>
using namespace std;
int main() {
double a = 5, b=6, sum, dif, f, y;
sum=a*a+b*b;
dif=a*a-b*b;
f=(a*a)/(b*b);
y=(a*a)*(b*b);
cout<<"1) a^2+b^2= "<<sum<<endl<<"2) a^2-b^2= "<<dif<<endl<<"3) a^2/b^2= "<<f<<endl<<"4) a^2*b^2= "<<y;
}