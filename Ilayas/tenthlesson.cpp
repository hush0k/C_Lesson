#include <iostream>
#include <string>

using namespace std;

//Struct
//struct Point{
//  type1 nameType1;
//  type2 nameType2;
//  type3 nameType3;
//  ...
//}

struct Student {
    //public, private, const;
public:
    string name;
    int age;

    //Constructor
    Student(string name, int age) {
        this->name = name;
        this->age = age;
    }

    float coutOfAvgScore() const {
        return (HistoryGrade + MathGrade + PhysicsGrade)/3;
    }

    //Destructor
    ~Student() {
        cout << "Student destructor" << endl;
    }

private:
    float MathGrade;
    float PhysicsGrade;
    float HistoryGrade;
};

int main() {
    // struct Student Ilyas = { "Ilyas", 14, 8.5, true };

    //Запрос данных
    // string studentName = Ilyas.name;
    // cout << "Student name is " << studentName << endl;
    //
    // //Изменение данных
    // Ilyas.age = 18;
    // cout << "Student age is " << Ilyas.age << endl;



    struct Student Kanysh = { "Kanysh", 20, 7.8, 3.8, 8.5};
    cout << "Kanyshs' average score is: " << Kanysh.coutOfAvgScore() << endl;
}