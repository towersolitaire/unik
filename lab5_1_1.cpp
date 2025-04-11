#include <iostream>
#include <iomanip>
int t;
float X0, Xk, h;
using namespace std;
int input() {
    cout << "Введiть данi:\n" << endl;
    cout <<"t = ";
    cin >>t;cout <<"\nВведiть Хпоч" << "\n";
    cin >> X0;
    cout <<"Хкiн"<<"\n";
    cin >>Xk;
    cout<<"Крок h"<<endl;
    cin >> h;
    return 0;
}
int calculating(){
    float x, y;
    x = X0;
    while (x < Xk){
        if (x <=0) y = x;
        else if (x <= 10) y = t * x;
        else y = x * x;
        cout <<"|"<<setw(9)<<x<<"|"<<setw(9)<<y<<"|"<<endl;
        x += h;
    }
    return 0;
}
int output() {
        cout <<"\nІнтервал"<<"[ "<<X0<<" ; "<<Xk<<"]"<<"\t"<<"Крок h="<<h;
        cout << "\n--------------------\n|     x   |       y |"<<endl;
        cout << "|---------|---------|"<<endl;
    }
int output2() {
        cout << "|---------|---------|"<<endl;
        cout<<"\n-----------------------"<<endl;
    }
int menu() {
    input();
    output();
    calculating();
    output2();
}
int main()
{
    menu();
}