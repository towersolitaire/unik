#include <iostream>
using namespace std;
int main()
{   int a, b, max;
  cout << "a=";
  cin >> a;
  cout << "b=";
  cin >> b;
  if (a>b) max=a;
  else max=b;
  cout <<"max="<<max;
  return 0;
}