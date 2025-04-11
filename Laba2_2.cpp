// Змішали v1 літрів води з температурою t1 градусів Цельсія з v2 літрами води з температурою t2
// градусів Цельсія. Обчислити температуру суміші що утворилася.
#include <iostream>
using namespace std;
int main()
{   float v1, t1, v2, t2;
    cout << "v1 = ";
    cin >> v1;
    cout << "t1 = ";
    cin >> t1;
    cout << "v2 = ";
    cin >> v2;
    cout << "t2 = ";
    cin >> t2;
    if (v1 + v2 == 0) {
        cout <<"Помилка, неправильно ввели дані";
    }
    else cout <<"T суміші = "<<(v1*t1+v2*t2)/(v1+v2);
return 0;
}