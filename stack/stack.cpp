#include <iostream>
using namespace std;

const int SIZE = 5;
int stack[SIZE] = {0, 0, 0, 0, 0};
int top = 0; 
int key;
int actions;

int action(){
    cout << "choose action 1.push 2.pop 3.see the stack 4.exit: ";
    cin >> actions;
    return actions;
};

void getKey() {
    cout << "please Enter the number: ";
    cin >> key;
};

void push() {
    if (top == SIZE){
        cout << "stack over flow!" << endl;
    } else {
        stack[top] = key;
        top++;
    }
};

void pop() {
    if (top == 0) {
        cout << "stack under flow!" << endl;
    } else {
        top--;
        cout << "Popped element: " << stack[top] << endl;
        stack[top] = 0;
    }
}

void printArray() {
    if (top == 0) {
        cout << "Stack is empty." << endl;
        return;
    }
    for (int i = 0; i < top; i++) {
        cout << stack[i] << " ";
    }
    cout << endl;
};

int main(){
    while(true){
        actions = action();

        switch (actions) {
            case 1:
                getKey();
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                printArray();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid action. Please try again." << endl;
                break;
        }
    }
    return 0;
}