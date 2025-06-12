// Mammals->Hunters, herbivores, birds, fish
// Hunters->cat-like appearance-> big, little
// Big->Lion, Tiger, Panther

#include <iostream>

using namespace std;

// class A {
// private:
//     int x;
// public:
//     void func1();
//     void func2();
// };
//
// class B: public A {
// private:
//     int y;
// public:
//     void func1();
//     void func3();
// }
//
// int main() {
//     B b;
//     b.func1();
//     b.A::func1();
// }


class Toyota {
public:
    string name;
    int wheels;
    int places;
    float volume;


    void maxSpeed() {
        cout << "Max speed: " << volume * 120 << endl;
    }

    Toyota(string name, int wheels, int places, float volume) {
        this->name = name;
        this->wheels = wheels;
        this->places = places;
        this->volume = volume;
    }

    Toyota() : name(""), wheels(4), places(5), volume(2.0) {}
};

class Camry: public Toyota {
public:
    string model = "Camry";
    bool sense_display;

    void playMusic() {
        cout << "Playing music..." << endl;
    }

    Camry(): Toyota(), sense_display(true) {}

};

int main() {
    Toyota toyota;

    Camry Camry;
    Camry.playMusic();
    Camry.maxSpeed();
}
