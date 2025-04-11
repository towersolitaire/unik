//Використовуючи оператори циклу, обчислити значення виразів,
//якщо х – дійсне, n – натуральне число. Числа х і n вводяться з
//клавіатури
#include <iostream>
#include <cmath>
using namespace std;

double factorial(int num) {
    double result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int function_a() {
    int n;
    double sum = 0.0;
    cout<<"Введіть натуральне число n: "; cin>>n;
    for (int k = 1; k<=n; ++k) {
        double fact = factorial(k*k);
        sum += 1.0/fact;
    }
    cout << "Результат: "<< sum;
    return 0;
}

int function_b() {
    int n;
    double mult=1;
    cout<<"Введіть натуральне число n: "; cin>>n;
    for (int i = 2; i<=n; ++i) {
        double fact = factorial(i);
        mult *= pow(1.0 - 1.0 / fact, 2);
    }
    cout << "Результат: " << mult;
    return 0;
}

int main() {
    func:
    char symb1;
    cout<<"Оберіть варіант завдання : a/b ";
    cin>>symb1;
    switch(symb1) {
        case 'a': case 'A': function_a(); break;
        case 'b': case 'B': function_b(); break;
        default:cout<<"Ще раз! "; goto func;
    }
    return 0;
}
