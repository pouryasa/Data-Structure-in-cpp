#include <iostream>
#include <random>
#include <array>

using namespace std;

int arr[100];

void fullWithRandom() {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> distrib(0, 99);

    for (int i = 0; i < 100; i++) {
        arr[i] = distrib(gen);
    }
}

const int SIZE = 100;

void printArray() {
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << endl;
    }
}

int main() {
    fullWithRandom();
    printArray();
    return 0;
}