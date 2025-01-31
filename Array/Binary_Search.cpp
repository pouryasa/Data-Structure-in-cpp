#include <iostream>
#include <random>
#include <algorithm>

using namespace std;

const int SIZE = 100;

int arr[SIZE];

void fillWithRandom() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 99);

    for (int i = 0; i < SIZE; i++) {
        arr[i] = distrib(gen);
    }
}

void printArray() {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (key > arr[mid]) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return -1;
}

int main() {
    fillWithRandom();

    cout << "Unsorted Array: " << endl;
    printArray();

    sort(arr, arr + SIZE);

    cout << "Sorted Array: " << endl;
    printArray();

    int key = 53;
    int index = binarySearch(arr, key, 0, SIZE - 1);

    if (index != -1) {
        cout << "Found " << key << " at index " << index << endl;
    } else {
        cout << key << " not found in the array." << endl;
    }

    return 0;
}