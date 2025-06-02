#include <iostream>

using namespace std;


// void sum() {
//     int a, b;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;
//
//     cout << "Sum of these numbers is: " <<a + b;
// }
//
// int sumOfNumbers() {
//     int a, b;
//     cout << "Enter first number: ";
//     cin >> a;
//     cout << "Enter second number: ";
//     cin >> b;
//
//     return a + b;
// }
//
// void greetUser(string name = "User") {
//     cout << "Welcome " << name << "!" << endl;
// }

//
// void infoAboutCar(string name) {
//     cout << "This car is: " << name << endl;
// }
//
// void infoAboutCar(string name, string country, int age) {
//     cout << "This car is: " << name << endl;
//     cout << "Country: " << country << endl;
//     int yearOfCreation = 2025 - age;
//     cout << "Year of creation: " << yearOfCreation << endl;
// }

int findFactorial(int n) {
    if (n <= 1) {
        return 1;
    }
    return n * findFactorial(n - 1);
}







int main() {
    // string name;
    // cout << "Enter car name: ";
    // cin >> name;
    // string country;
    // cout << "Enter car country: ";
    // cin >> country;
    // int age;
    // cout << "Enter car age: ";
    // cin >> age;
    //
    // infoAboutCar(name);
    // infoAboutCar(name, country, age);

    int result = findFactorial(5);
    cout << result << endl;

}