#include <iostream>
#include <string>

using namespace std;

int main() {
    int a = 5;
    int b = 8;

    // Basic operators
    int c = a + b;
    cout << "The sum of " << a << " and " << b << " is: " << c << endl;

    int d = a - b;
    cout << "The difference of " << a << " and " << b << " is: " << d << endl;

    int e = a * b;
    cout << "The product of " << a << " and " << b << " is: " << e << endl;

    int g = b / a;
    cout << "The quotient of " << a << " and " << b << " is: " << g << endl;

    int h = b % a;
    cout << "The remainder of " << a << " and " << b << " is: " << h << endl;


    // Operators with equal symbol
    a += 5;
    a = a + 5;

    b -= 5;
    b = b - 5;

    c *= 2;
    c = c * 2;

    //Comparison operators
    a > b;
    cout << "A is grater than b" << (a > b) << endl;

    a < b;
    cout << "B is grater than a" << (a < b) << endl;

    a >= b;
    cout << "A is grater or equal than b" << (a >= b) << endl;

    a <= b;
    cout << "B is grater or equal than a" << (a <= b) << endl;

    a == b;
    cout << "A is equal to b" << (a == b) << endl;

    a != b;
    cout << "A is not equal to b" << (a != b) << endl;

    // Logic operators
    bool yes = true;
    bool no = false;

    cout << "x AND y" << (yes && no) << endl;
    cout << "x OR y " << (yes || no) << endl;
    cout << "x NOT" << (!yes) << endl;

    //Increment and decrement
    a++;
    cout << "a = a + 1" << a << endl;

    b--;
    cout << "b = b - 1" << b << endl;
 }
