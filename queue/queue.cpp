 
#include <iostream>
using namespace std;

const int SIZE = 5;
int queue[SIZE];
int front = 0;
int rear = 0;

bool isFull() {
    return (rear + 1) % SIZE == front;
}

bool isEmpty() {
    return front == rear;
}

void addq(int key) {
    if (isFull()) {
        cout << "Queue is full" << endl;
    } else {
        queue[rear] = key;
        rear = (rear + 1) % SIZE;
    }
}

void removeq() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
    } else {
        cout << "Removed: " << queue[front] << endl;
        front = (front + 1) % SIZE;
    }
}

void displayQueue() {
    if (isEmpty()) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "Queue: ";
    for (int i = front; i != rear; i = (i + 1) % SIZE) {
        cout << queue[i] << " ";
    }
    cout << endl;
}

int action() {
    int actions;
    cout << "Choose action: 1.add to queue 2.remove from queue 3.see the queue 4.exit: ";
    cin >> actions;
    return actions;
}

int main() {
    while (true) {
        int actions = action();
        switch (actions) {
            case 1:
                int key;
                cout << "Please enter the number: ";
                cin >> key;
                addq(key);
                break;
            case 2:
                removeq();
                break;
            case 3:
                displayQueue();
                break;
            case 4:
                return 0;
            default:
                cout << "Invalid action, try again." << endl;
                break;
        }
    }
    return 0;
}
