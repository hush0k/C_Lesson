#include <iostream>

using namespace std;

int main() {
    int x = 5;

    int *ptr = &x;


    //Initializing pointer
    int a = 10;
    int *p = &a;
    //OR
    int *pt;
    pt = &a;

    //Initializing reference
    int b = 15;
    int &ref = b; //correct

    int &ref2; // incorrect
    ref2 = b;


    //Giving smth
    p = &b;

    ref = a;




}
