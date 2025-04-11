#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double calculate_the_f(double num) {
  return cbrt(2 * pow(num, 2));
}
int main_for_lab3(){
  function:
  float a, b;
  int n;
  cout << "Введіть початок відрізку інтегрування a = ";
  cin >> a;
  cout << "Введіть кінець відрізку інтегрування b = ";
  cin >> b;
  if (float(a) >= float(b)) {
    cout << "a не може бути >= b" << endl;
    return 1;
  }
  cout << "Введіть кількість ділянок n = ";
  cin >> n;
  if (n % 2 != 0) {
    cout << "Кількість ділянок повинна бути парною" << endl;
    return 1;
  }
  double step = (b-a)/n;
  double Intgrl = 0;
  int index = 0;
  double sum_even = 0;
  double sum_odd = 0;
  double f_ot_a = calculate_the_f(a);
  double f_ot_b = calculate_the_f(b);
  for (float i = a; i <= b; i += step, index++) {
    double f_value = calculate_the_f(i);
    if (i !=a && i !=b) {
      if (index % 2 == 0) {
        sum_even += f_value;
      }
      else {
        sum_odd += f_value;
      }
    }
  }
  Intgrl = step/3*(f_ot_a + 4 * sum_odd + 2 * sum_even + f_ot_b);
  cout << fixed << showpoint;
  cout << setprecision(5);
  cout << "Інтеграл функції на відрізку " << "[" << a << ", " << b << "] = " << Intgrl << endl;
  cout << "Повторити розрахунки? y/n: ";
  char symb;
  cin >> symb;
  switch (symb) {
    case 'n': return 0;
    case 'N': return 0;
    case 'y': goto function;
    case 'Y': goto function;
    default: break;
  }
  return 0;
}

long long factorial(int num) {
  long long result = 1;
  for (int i = 1; i <= num; i++) {
    result *= i;
  }
  return result;
}

int function_a() {
  int n;
  double sum;
  cout<<"Введіть натуральне число n: "; cin>>n;
  for (int k = 1; k<=n; ++k) {
    long long fact = factorial(pow(k,2));
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
    long long fact = factorial(i);
    mult *= pow(1.0 - 1.0 / fact, 2);
  }
  cout << "Результат: " << mult;
  return 0;
}

int main_for_lab4() {
  func:
  char symb;
  cout<<"Оберіть варіант завдання : a/b ";
  cin>>symb;
  switch(symb) {
    case 'a': case 'A': function_a(); break;
    case 'b': case 'B': function_b(); break;
    default:cout<<"Ще раз! "; goto func;
  }
  return 0;
}

int menu() {
  char answer;
  cout << "Виберіть завдання: 3 / 4: "; cin>>answer;
  switch(answer){
    default:break;
    case '3': main_for_lab3(); break;
    case '4': main_for_lab4(); break;
  }
}
int main(){
  menu();
}