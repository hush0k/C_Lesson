#include <iostream>

using namespace std;

int main() {
    /*
        if (condition) {
            //Code
        } else if (condition) {
            //Code
        } else {
            //Code
        }
    */

    // int a = 5;
    // int b = 5;
    //
    // if (a < b) {
    //     cout << "a < b" << endl;
    // } else if (a > b) {
    //     cout << "a > b" << endl;
    // } else {
    //     cout << "a == b" << endl;
    // }
    //
    // if (a != b) {
    //     cout << "a != b" << endl;
    // } else {
    //     cout << "a == b" << endl;
    // }
    //
    // if (a <= b) {
    //     cout << "a <= b" << endl;
    // } else {
    //     cout << "a > b" << endl;
    // }

    // int num1;
    // cout << "Enter number: ";
    // cin >> num1;
    //
    // if (num1 % 2 == 0) {
    //     cout << "Number is even" << endl;
    // } else {
    //     cout << "Number is odd" << endl;
    // }

    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    if (num1 > num2 && num1 > num3) {
        cout << "A is the biggest number";
    } else if (num2 > num1 && num2 > num3) {
        cout << "B is the biggest number";
    } else if (num3 > num1 && num3 > num2) {
        cout << "C is the biggest number";
    } else {
        cout << "They are equal";
    }

    //HOME WORK
    // Пассажир может сесть в самолёт, если у него есть паспорт и билет. Нужно создать два переменных например как hasPassport and hasTicket и они должны быть или true or false
    // Пользователь вводит возраст. Если 18 или больше — "Adult", иначе — "Minor".
    // Пользователь вводит пароль. Если он совпадает с "12345", выводим "Access granted", иначе — "Access denied".
    // Та же задача с паролем, но здесь нужно еще ввести логин. Если логин "admin" и пароль совпадают выводим что успешно зашел, а если нет нужно описать где у него ошибка
    


}
