#include <iostream>

using namespace std;
 
int main() {
    setlocale(LC_ALL, "Russian");
    int a;
    cout<<"Введите год: ";
    cin>>a;
    
    if(a<1){
        cout<<"Неправильно введён год!";
        return 0;
    }
    
    cout<<"Год ";
        switch ((a)%10) {
        case 0:
        case 1: cout<<"белой(ого) "; break;
        case 2:
        case 3: cout<<"чёрной(ого) "; break;
        case 4:
        case 5: cout<<"зелёной(ого) "; break;
        case 6:
        case 7: cout<<"красной(ого) "; break;
        case 8:
        case 9: cout<<"жёлтой(ого) "; break;
        }
    switch ((a+8)%12) {
    case 0: cout<<"крысы"; break;
    case 1: cout<<"быка"; break;
    case 2: cout<<"тигра"; break;
    case 3: cout<<"кролика"; break;
    case 4: cout<<"дракона"; break;
    case 5: cout<<"змеи"; break;
    case 6: cout<<"лошади"; break;
    case 7: cout<<"овцы"; break;
    case 8: cout<<"обезьяны"; break;
    case 9: cout<<"петуха"; break;
    case 10: cout<<"собаки"; break;
    case 11: cout<<"свиньи"; break;
    }
}