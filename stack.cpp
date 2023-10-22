#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = 5;
    int arr[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1;
    }

    void push(int data) {
        if (top == MAX_SIZE - 1) {
            cout << "Stack is full. Cannot push " << data << endl;
        } else {
            arr[++top] = data;
            cout << data << " pushed to the stack." << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty. Cannot pop." << endl;
        } else {
            cout << arr[top--] << " popped from the stack." << endl;
        }
    }

    void view() {
        if (top == -1) {
            cout << "Stack is empty." << endl;
        } else {
            cout << "Stack elements: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Stack stack;
    int choice, data;
    stack.push(12);
    stack.push(14);
    stack.push(16);
    stack.push(17);
    stack.push(70);
    stack.pop();
    stack.push(65);
    stack.view();
    return 0;
}
