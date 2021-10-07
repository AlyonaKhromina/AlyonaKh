#include <iostream>
#include <math.h>
using namespace std;
int main() {
double a = 5, b=-6, sum, dif, f, y;
sum=abs(a)+abs(b);
dif=abs(a)-abs(b);
f=abs(a)/abs(b);
y=abs(a)*abs(b);
cout<<"1) |a|+|b|= "<<sum<<endl<<"2) |a|-|b|= "<<dif<<endl<<"3) |a|/|b|= "<<f<<endl<<"4) |a|*|b|= "<<y;
}
