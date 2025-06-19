#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using namespace std;

class Stack {
    private:
    int top;
    int arr[1000];

    public:
    Stack() {
        top = -1;
    }

    bool push(int x) {
        if (top >= 1000 - 1) {
            cout << "Stack overflow" << endl;
            return false;
        }
        arr[++top] = x;
        return true;
    }

    int pop() {

    }
};

int main() {
    // //stack
    // stack<int> s;
    //
    // s.push(1); //
    // s.push(2);
    // s.push(3);
    //
    // while(!s.empty()) {
    //     cout << s.top() << endl;
    //     s.pop();
    // }
    //
    //
    //
    // //queue
    // queue<char> q;
    // q.push('a');
    // q.push('b');
    // q.push('c');
    //
    // while(!q.empty()) {
    //     cout << q.back() << " ";
    //     q.pop();
    // }
    //
    //
    // //deque
    // deque<char> d = {'a', 's', 'd'};
    //
    // deque<int> dq;
    // dq.push_back(15);
    // dq.push_front(30);
    // dq.push_front(35);
    // dq.push_front(45);
    //
    // cout << endl;
    // cout << dq[1] << endl;
    //
    //
    // for(int n : dq) {
    //     cout << n << " ";
    // }

}