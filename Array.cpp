#include <iostream>
using namespace std;

const int SIZE = 4;
int arr[SIZE] = {13, 15, 197, 25};

void inarr() {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}

void insertarr(int arr[], int key, int place) {
    if (place < 0 || place > SIZE) {
        cout << "Invalid insertion position!" << endl;
        return; // Important: Exit if the position is invalid
    }

    // Shift elements to the right, starting from the *end*
    for (int i = SIZE - 1; i > place; i--) {
        arr[i] = arr[i - 1];
    }
    arr[place] = key;
}

void delarr(int arr[], int rmplace) {
    if (rmplace < 0 || rmplace >= SIZE) {
        cout << "Invalid deletion position!" << endl;
        return; // Important: Exit if position is invalid
    }

    for (int i = rmplace; i < SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[SIZE - 1] = 0; // Reset the last element to zero.  This is optional, but good practice.
}

int linearSearch(int arr[], int find) {
    for (int i = 0; i < SIZE; i++) { // Corrected loop condition
        if (arr[i] == find) {
            cout << "we find it!" << " index is: " << i << endl;
            return i; // Return the index where found
        }
    }
    cout << "we didn't find it" << endl; // Message only after the entire loop
    return -1; // Return -1 to indicate not found
}

int main() {
    cout << "Initial array: " << endl;
    inarr();

    int key = 1; // what we want to insert
    int place = 2; // where key to be inserted

    insertarr(arr, key, place);

    cout << "Array after insertion: " << endl;
    inarr();

    int rmplace = 2; // where should be deleted

    delarr(arr, rmplace);

    cout << "Array after deletion: " << endl;
    inarr();

    int find = 12;
    linearSearch(arr, find);

    return 0;
}