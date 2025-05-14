#include <iostream>

using namespace std;

int main() {
    //Structure of For loop
    /*
        for (initialize, condition, increment/decrement) {
            //code
        }
    */

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            cout << i << " is even num" << endl;
            break;
        } else {
            cout << i << " is odd num" << endl;
        }
    }


    /*
        while (condition) {
            //code
        }
    */
    int number;
    bool choice = true;
    int cnt = 0;
    while (choice == true) {
        cnt++;
        cout << "Enter a number: ";
        cin >> number;
        if (number % 2 == 0) {
            cout << number << " is even num" << endl;
            choice = false;
        } else {
            cout << number << " is odd num" << endl;
        }
    }
    cout << "This is cnt for WHILE loop: " << cnt << endl;


    /*
        do {
            //code
        } while (condition)
    */
    int number2;
    bool choice2 = true;
    int cnt2 = 0;
    do {
        cnt2++;
        cout << "Enter a number: ";
        cin >> number2;
        if (number2 % 2 == 0) {
            cout << number2 << " is even num" << endl;
            choice2 = false;
        } else {
            cout << number2 << " is odd num" << endl;
        }
    } while (choice2 == true);
    cout << "This is cnt for DO WHILE loop: " << cnt2 << endl;



    //Сумма всех чисел до N
    int n;
    cout << "Enter a number: ";
    cin >> n;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    cout << "Sum is: " << sum << endl;

    //HOME WORK
    //Вывести таблицу умножение 5 через for loop он должен быть таким
    /*
        5 * 1 = 5
        5 * 2 = 10
        5 * 3 = 15
        5 * 4 = 20
        ...
        5 * 9 = 45
    */

    //Найти факториал числа N. Нужно ввести число N и найти его факториал через while loop
    //Факториал 5 это например 1 * 2 * 3 * 4 * 5 = ?

    //Напиши программу, угадай число. Будет какое то число N. Задай ему любое число и через while loop пока вводимое число не будет равен к N программа будет продолжатся. 


}