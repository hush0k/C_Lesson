#include <iostream>
#include <string>

using namespace std;

int main() {
    // int n;
    // cin >> n;
    //
    // int arr[n];
    // for (int i = 0; i < n; i++) {
    //     int x;
    //     cin >> x;
    //     arr[i] = x;
    // }
    //
    // int a = arr[0];
    // cout << a << endl;
    //
    // // {1, 2, 3, 4, 5}
    // // {0, 1, 2, 3, 4}
    //
    // bool truefalsep[] = { false, false, false, false, false, false, false, false, false, false, false, false, false, false, false, false };
    // char sybols[] = { 'a', 'b', 'c', 'd', 'e', 'f' };
    // string words[] = { "a", "b", "c", "d", "e", "f" };

    //             column
    // int doublearr[3][4] = {{1, 2, 3, 3}, {4, 5, 6, 3}, {7, 8, 9, 3}};
    //           row
    // 1, 2, 3, 3
    // 4, 5, 6, 3
    // 7, 8, 9, 3


    // for (тип_данных переменная : контейнер) {
    // code
    // }
    // char name[] = "Kanysh";
    // for (char c : name) {
    //     cout << "This is new element: " << c << endl;
    // }


    int weigths[5];
    for (int i = 0; i < 5; i++) {
        cin >> weigths[i];
    }

    for (int num : weigths) {
        if (num % 2 == 0) {
            cout << num << " ";
        }
    }






}
