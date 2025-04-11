#include <iostream>
using namespace std;
int main(){
  int a = 5;
  int *ptr = &a;
  int &ref = a;
  cout << "ptr = "<< ptr << endl;
  cout << "&ref = "<<&ref << endl;
  cout << "*ptr = "<<*ptr << endl;
  cout << "ref = "<<ref << endl;
  *ptr = 10;
  cout << "*ptr = "<< *ptr << endl;
  cout << "ref = "<<ref << endl;
  ref = 12;
  cout << "*ptr = "<< *ptr << endl;
  cout << "ref = "<<ref << endl;
  return 0;
}