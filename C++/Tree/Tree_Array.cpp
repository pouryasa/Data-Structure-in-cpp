 
#include <iostream>
#include <cmath>
using namespace std;

const int SIZE = 6;
int arr[SIZE] = {0,0,0,0,0,0};
int i = 0; 

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
        arr[i-1] = 0;
        i--;
        cout << "Last value removed." << endl;
    }
}

void printSpace(int count) {
    for (int k = 0; k < count; k++) {
        cout << " ";
    }
}

void seeTree() {
    if (i == 0) {
        cout << "Tree is empty!" << endl;
    } else {
        int h = ceil(log2(i+1)) - 1;  
        int level = 0;  
        int nodesInLevel = pow(2, level);  
        int index = 0;  

        while (index < i) {
            int spaceCount = pow(2, h-level+1) - 1;
            printSpace(spaceCount);

            for (int j = 0; j < nodesInLevel && index < i; j++) {
                cout << arr[index] << " ";
                printSpace(spaceCount);
                index++;
            }
            cout << endl;
            level++;
            nodesInLevel = pow(2, level);
        }
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
