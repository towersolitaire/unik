// варіант 1 - глобальна зміна
// #include <iostream>
// using namespace std;
// int height = 0;
// int input() {
//  cout << "Input height of triangle ";
//  cin >> height;
//  return 0;
// }
// int output() {
//  for (int i = 0; i < height; i++)
//  {
//   for (int j = 1; j < height - i; j++)
//   {
//    cout << ' ';
//   }
//   for (int j = height - 2 * i; j <= height; j++)
//   {
//    cout << '^';
//   }
//   cout << endl;
//  }
//  return 0;
// }
//
// int main()
// {
//  input();
//  output();
//  return 0;
// }


// варіант 2 - передача за значенням
// #include <iostream>
// using namespace std;
// int input() {
//  int height;
//  cout << "Input height of triangle ";
//  cin >> height;
//  return height;
// }
// int output(int height) {
//  for (int i = 0; i < height; i++)
//  {
//   for (int j = 1; j < height - i; j++)
//   {
//    cout << ' ';
//   }
//   for (int j = height - 2 * i; j <= height; j++)
//   {
//    cout << '^';
//   }
//   cout << endl;
//  }
//  return 0;
// }
// int main()
// {
//  int height = input();
//  output(height);
//  return 0;
// }


// варіант 3 - передача за посиланням
// #include <iostream>
// using namespace std;
// int input() {
//     int height;
//     cout << "Input height of triangle ";
//     cin >> height;
//     return height;
// }
// int output(int& ref) {
//     for (int i = 0; i < ref; i++)
//     {
//         for (int j = 1; j < ref - i; j++)
//         {
//             cout << ' ';
//         }
//         for (int j = ref - 2 * i; j <= ref; j++)
//         {
//             cout << '^';
//         }
//         cout << endl;
//     }
//     return 0;
// }
// int main()
// {
//     int height = input();
//     output(height);
//     return 0;
// }


// варіант 4 - передача за покажчиком
#include <iostream>
using namespace std;
int input() {
    int height;
    cout << "Input height of triangle ";
    cin >> height;
    return height;
}
int output(int* ptr) {
    for (int i = 0; i < *ptr; i++)
    {
        for (int j = 1; j < *ptr - i; j++)
        {
            cout << ' ';
        }
        for (int j = *ptr - 2 * i; j <= *ptr; j++)
        {
            cout << '^';
        }
        cout << endl;
    }
    return 0;
}
int main()
{
    int height = input();
    output(&height);
    return 0;
}