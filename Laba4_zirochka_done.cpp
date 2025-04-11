#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int b, c;
    cout << "Enter an encrypted b: ";
    cin >> b;
    cout << "Enter an encrypted c: ";
    cin >> c;
    switch (b) {
        default: cout << "b and c must be in a range of [0;9]" << endl; return 1;
        case 1: b = 0; break;
        case 2: b = 4; break;
        case 3: b = 9; break;
        case 4: b = 1; break;
        case 5: b = 7; break;
        case 6: b = 2; break;
        case 7: b = 8; break;
        case 8: b = 3; break;
        case 9: b = 6; break;
        case 0: b = 5; break;
    }
    switch (c) {
        default: cout << "b and c must be in a range of [0;9]" << endl; return 1;
        case 1: c = 0; break;
        case 2: c = 4; break;
        case 3: c = 9; break;
        case 4: c = 1; break;
        case 5: c = 7; break;
        case 6: c = 2; break;
        case 7: c = 8; break;
        case 8: c = 3; break;
        case 9: c = 6; break;
        case 0: c = 5; break;
    }
    int a = 0;
    for (int i = 1; i <= 10; i++) {
        a += b * i + 2 * pow((c - i), i);
    }
    a = a % 10;
    // cout << "The pre-encrypted a is: "<<a << endl;
    switch (a) {
        default: return 1;
        case 1: a = 4; break;
        case 2: a = 6; break;
        case 3: a = 8; break;
        case 4: a = 2; break;
        case 5: a = 0; break;
        case 6: a = 9; break;
        case 7: a = 5; break;
        case 8: a = 7; break;
        case 9: a = 3; break;
        case 0: a = 1; break;
    }
    cout <<"The result is: "<< a << endl; return 0;
}