 
#include <iostream>
using namespace std;

int i = 0; 

const int SIZE = 6;
int arr[SIZE] = {0,0,0,0,0,0};

bool isFull() {
    return (i == SIZE); 
}

int action() {
    int actions;
    cout << "Choose action: 1.add to Tree 2.remove from Tree 3.see the Tree 4.exit: ";
    cin >> actions;
    return actions;
}

void fullArr(int key) {
    if (isFull()) {
        cout << "Tree is full!" << endl;
    } else {
        arr[i] = key;
        i++;
        cout << "Value added." << endl;
    }
}

void removeLast() {
    if (i == 0) {
        cout << "Tree is empty!" << endl;
    } else {
        i--;
        cout << "Last value removed." << endl;
    }
}

void seeTree() {
    if (i == 0) {
        cout << "Tree is empty!" << endl;
    } else {
        cout << "Current Tree: ";
        for (int j = 0; j < i; j++) {
            cout << arr[j] << " ";
        }
        cout << endl;
    }
}

int main() {
    while (true) {
        int actions = action(); 
        switch (actions) {
            case 1:
                int key;
                cout << "Please enter the value: ";
                cin >> key;
                fullArr(key);
                break;
            case 2:
                removeLast();
                break;
            case 3:
                seeTree();
                break;
            case 4:
                cout << "Exiting program." << endl;
                return 0;
            default:
                cout << "Invalid action. Please try again." << endl;
                break;
        }
    }
    return 0;
}
