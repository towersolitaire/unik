// Обчислити і вивести на екран у вигляді таблиці
// значення функції F на інтервалі від Хпоч. до Хкінц. з кроком Δх.
// Значення a, b, c, Хпоч., Хкінц., Δх вводити з клавіатури.
#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    float a, b, c, x1, x2, delta_x;
    cout << "Enter a : "; cin >> a;
    cout << "Enter b : "; cin >> b;
    cout << "Enter c : "; cin >> c;
    cout << "Enter x1 : "; cin >> x1;
    cout << "Enter x2 : "; cin >> x2;
    cout << "Enter delta_x : "; cin >> delta_x;
    float result = 0;
    cout << "\nІнтервал" << " [" << x1 << " ; " << x2 << "]" << "\t" << "Крок delta_x = " << delta_x;
    cout << "\n--------------------\n|    x    |    y    |" ;
    cout << "\n|---------|---------|" << endl;
    float i = x1;
    while (i<=x2) {
        if (i<5 && b !=0) {
            result = -a*i*i - b;
        }
        else if (i>5 && c==0) {
            result = (i-a)/i;
        }
        else {
            if (c!=0) {
                result = -b/c;
            }
            else{cout<<i<<" = i; c cannot be 0!"<<endl;}
            if (c!=0) {
                result = -b/c;
            }
        }
        cout << "|" << setw(9) << i << "|" << setw(9) << result << "|";
        cout << "\n";
        i+=delta_x;
    }
}