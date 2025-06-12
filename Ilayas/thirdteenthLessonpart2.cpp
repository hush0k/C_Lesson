#include <iostream>
#include <vector>

using namespace std;

// void printVector(vector<int>& v) {
//     for (int n : v) {
//         cout << n << " ";
//     }
//     cout << endl;
// }
//
// void printVectorChar(vector<char>& v) {
//     for (char n : v) {
//         cout << n << " ";
//     }
//     cout << endl;
// }
//
int main() {
//     vector<int> v = {1, 2, 3, 4, 5};
//
//     vector<int> v2(5, 1);
//
//     printVector(v2);
//     printVector(v);
//
//
//     //push_back()
//     vector<char> symbols ={'a', 'b', 'c'};
//
//     printVectorChar(symbols);
//
//     symbols.push_back('d');
//
//     printVectorChar(symbols);
//
//
//     //insert()
//     symbols.insert(symbols.begin() + 2, 'e');
//
//     printVectorChar(symbols);
//
//
//     //access and updates
//     vector<int> v3 = {1, 2, 3, 4, 5};
//
//     //accessing to values
//     cout << v3[1] << endl;
//     cout << v3.at(1) << endl;
//
//     //update the vector
//     v3[1] = 125;
//     printVector(v3);
//
//
//     //size()
//     cout << v3.size() << endl;
//
//
//     //pop_back()
//     v3.pop_back();
//     printVector(v3);
//
//     //erase()
//     v3.erase(v3.begin()+1, v3.begin()+2);
//     printVector(v3);
//
//     int n;
//     cin >> n;
//     vector<int> v4;
//
//     for (int i = 0; i < n; i++) {
//         cin >> v4[i];
//     }

    int n;
    cin >> n;

    vector<int> vec;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        vec.push_back(num);
    }


    for (int i = vec.size() - 1; i >= 0; --i) {

        cout << vec[i] << " ";
    }



}