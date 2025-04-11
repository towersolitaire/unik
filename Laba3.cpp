#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
//
// double calculate_the_f(double num) {
// 	return cbrt(2 * pow(num, 2));
// }

int main(){
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
	double f_ot_a = cbrt(2 * pow(a, 2));
	double f_ot_b = cbrt(2 * pow(b, 2));
	for (float i = a; i <= b; i += step, index++) {
		double f_value = cbrt(2 * pow(i, 2));
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
		case 'n': case 'N': return 0;
		case 'y': case 'Y': goto function;
		default: break;
	}
	return 0;
}
