#include <iostream>
using namespace std;

const int SIZE = 4;
int arr[SIZE] = {0, 0, 0, 0};

void inarr() {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}

void insertarr(int arr[], int key, int place) {
    for (int i = SIZE - 1; i > place; i--) {
        arr[i] = arr[i - 1];
    }
    arr[place] = key;
}

void delarr(int arr[], int rmplace) {
    for (int i = rmplace; i < SIZE - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[SIZE - 1] = 0; // Reset the last element to zero
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
    
    return 0;
}
