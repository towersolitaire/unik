#include <iostream>
using namespace std;
int input(){
  cout<<"Enter a number: ";
  int n;
  cin>>n;
  return n;
}

int calc(int* ptr) {
  while (*ptr>0){
    int result = *ptr%10;
    cout<<result;
    *ptr=*ptr/10;
  }
  return 0;
}

void calc2() {
  int n = input();
  calc(&n);
}

int main() {
calc2();
}