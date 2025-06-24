#include <iostream>
#include <set>
#include <map>

using namespace std;

int main() {
    //(1, 5, 8, 9)

    // set<int> s = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //
    // for(int x : s) {
    //     cout << x << " ";
    // }
    // cout << endl;
    //
    // set<int> s2;
    //
    // s2.insert(1);
    // s2.insert(5);
    // s2.insert(1);
    // s2.insert(4);
    // s2.emplace(75);
    // for(int x : s2) {
    //     cout << x << " ";
    // }
    //
    // cout << endl;
    //
    //
    // auto num1 = s2.begin();
    // auto num2 = next(num1, 1);
    //
    // cout << *num1 << " " << *num2;
    //
    //
    // auto findnum = s2.find(75);
    //
    // if(findnum != s2.end()) {
    //     cout << *findnum << endl;
    // } else {
    //     cout << "Not found" << endl;
    // }
    //
    // cout << endl;
    //
    //
    // for (auto it = s2.begin(); it != s2.end(); it++) {
    //     cout << *it << " ";
    // }
    //
    // cout << endl;
    //
    // s2.erase(75);
    //
    // s2.erase(s2.begin());
    //
    // for (auto it = s2.begin(); it != s2.end(); it++) {
    //     cout << *it << " ";
    // }

    //MAP
    map<int, string> group {    {1, "Kanat"},
                                {2, "Maksat"},
                                {3, "Peter"},
                                {84, "Roman"}};



    for(auto& x : group) {
        cout << x.first << " " << x.second << endl;
    }

    cout << endl;
    cout << "NEW GROUP" << endl;

    group.insert({4, "Almas"});

    for(auto& x : group) {
        cout << x.first << " " << x.second << endl;
    }

    cout << group[84] << endl;
    cout << group.at(4) << endl;

    group[84] = "Ilyas";
    group.at(84) = "Iris";
    cout << group[84] << endl;


    auto it = group.find(51);

    if (it != group.end()) {
        cout << it->first << " " << it->second << endl;
    } else {
        cout << "Not found" << endl;
    }

    for(auto it = group.begin(); it != group.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    group.erase(84);
    cout << endl;
    for(auto it = group.begin(); it != group.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }


    group.clear();

    if(group.empty()) {
        cout << "This map is empty" << endl;
    } else {
        for(auto it = group.begin(); it != group.end(); it++) {
            cout << it->first << " " << it->second << endl;
        }
    }
}