#include <iostream>
using namespace std;
int main(){
    const int n = 7;
    int mas[n];
    int a, b;
    cout<<"Enter a: "; cin>>a;
    cout<<"Enter b: "; cin>>b;
    if (a>=b) {
        int q = a;
        a = b;
        b = q;
    }
    srand(time(NULL));
    cout<<"Проміжок: "<<a<<";"<<b<<endl;
    cout<<"Масив: ";
    int *ptr = mas;
    for(int i =0; i < n; i++) {
        *ptr = a + rand() % (b - a + 1);
        cout << *ptr << ' ';
        ptr++;
    }
    int min = mas[0];
    for (int j=0; j<n; j++) {
        if (mas[j] < min) {
            min = mas[j];
        }
    }

    int first = -1, last = -1;
    int sum = 0;
    for (int k=0; k<n; k++) {
        if (mas[k] > 0) {
            first = k; break;
        }
    }
    for (int k=n-1; k>=0; k--) {
        if (mas[k] > 0) {
            last = k; break;
        }
    }
    for (int z=first+1; z<last; z++) {
        sum += mas[z];
    }
    cout<<endl<<"Мінімальний елемент: "<<min<<endl;
    if (first==-1 || last==-1) {
        cout<<"Додатніх елементів немає"<<endl;
    }
    else if (first == last) {
        cout<<"Лише 1 додатній елемент" << endl;
    }else {
        cout << "Сума між першим і останнім додатніми елементами (не включно): " << sum << endl;
    }
    return 0;
}
