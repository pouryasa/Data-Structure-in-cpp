#include <iostream>
using namespace std;

const int SIZE = 4;
int arr[SIZE] = {0, 0, 0, 0};

void inarr() {
    int s = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < s; i++) {
        cout << arr[i] << endl;
    }
}

void insertarr(int arr[], int key, int place) {
    for (int i = SIZE - 1; i > place; i--) {
        arr[i] = arr[i-1];
    }
    arr[place] = key;
}

int main() {
    inarr();

    int key = 1; // what we want to insert
    int place = 2; // where key to be inserted

    insertarr(arr, key, place);
    
    cout << "Array after insertion:" << endl;
    inarr();

    return 0;
}
