#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
        switch (choice) {
            case choice1 :
                //code
            case choice2 :
                //code
            case choice3 :
                //code
            default:
                //code
        }
    */

    int num;
    cout << "Enter a number: ";
    cin >> num;

    // if (num == 1) {
    //     cout << "Number is 1" << endl;
    // } else if (num == 2) {
    //     cout << "Number is 2" << endl;
    // } else if (num == 3) {
    //     cout << "Number is 3" << endl;
    // } else {
    //     cout << "Invalid input" << endl;
    // }


    switch (num) {
        case 1:
            cout << "Number is 1" << endl;
            break;
        case 2:
            cout << "Number is 2" << endl;
            break;
        case 3:
            cout << "Number is 3" << endl;
            break;
        default:
            cout << "Invalid input" << endl;
            break;
    }


}