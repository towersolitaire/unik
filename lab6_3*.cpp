//В комп’ютерній системі зареєстровано таких
//користувачів: Alice, Bob, Carl з паролями Cooper, Dylan, Perkins
//відповідно. Розробити програму, яка визначатиме чи зможе
//користувач отримати доступ до читання (r), запису (w) або
//виконання файлів (x), на основі імені облікового запису
//користувача (так званий "логін") та пароля.

#include <iostream>
using namespace std;
int main(){
    char login[3]; // 0 - alice, 1- bob, 2 - carl
    char passwords[3];// 0 - cooper, 1- dylan, 2 - perkins
    char permissions[3];
    login[0] = 'a';
    login[1] = 'b';
    login[2] = 'c';
    passwords[0] = 'c';
    passwords[1] = 'd';
    passwords[2] = 'p';
    permissions[0] = 'r';
    permissions[1] = 'w';
    permissions[2] = 'x';
    char answer;
    cout << "Enter your login: "; cin >> answer;

    if (login[0] == answer){
        cout << "Hello Alice! Enter your password: "; cin>>answer;
        if (passwords[0] == answer) {
            cout<< "Your permissions: "<<permissions[2];
        }
        else{cout << "Wrong password!";}
    }
    else if (login[1] == answer){
        cout << "Hello Bob! Enter your password: "; cin>>answer;
        if (passwords[1] == answer) {
            cout<< "Your permissions: "<<permissions[0];
        }
        else{cout << "Wrong password!";}
    }
    else if (login[2] == answer){
        cout << "Hello Carl! Enter your password: "; cin>>answer;
        if (passwords[2] == answer) {
            cout<< "Your permissions: "<<permissions[0]<<", "<<permissions[1];
        }
        else{cout << "Wrong password!";}
    }
    else{cout << "Wrong login!";}
    return 0;
}
/*
Формалізація лаб 6_3*
1. Вхідні дані: логін, пароль користувача.
2. Вихідні дані: дозволи користувача.
3. Створюємо 3 масиви з логінами, паролями, дозволами.
4. Приймаємо першу букву імені, першу букву пароля.
5. Перевіряємо все на правильність, якщо так - виводимо дозволи, інакше пишемо про помилку.
*/