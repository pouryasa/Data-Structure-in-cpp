#include <stdio.h>

#define MAX_SIZE 5

int arr[MAX_SIZE] = {13, 15, 197, 25};
int currentSize = 4;

void printArray() {
    for (int i = 0; i < currentSize; i++) {
        printf("%d\n", arr[i]);
    }
}

void insertarr(int arr[], int key, int place) {
    if (place < 0 || place > currentSize || currentSize == MAX_SIZE) {
        printf("Invalid insertion position or array is full!\n");
        return;
    }

    for (int i = currentSize; i > place; i--) {
        arr[i] = arr[i - 1];
    }
    arr[place] = key;
    currentSize++;
}

void delarr(int arr[], int rmplace) {
    if (rmplace < 0 || rmplace >= currentSize) {
        printf("Invalid deletion position!\n");
        return;
    }

    for (int i = rmplace; i < currentSize - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[currentSize - 1] = 0;
    currentSize--;
}

int linearSearch(int arr[], int find) {
    for (int i = 0; i < currentSize; i++) {
        if (arr[i] == find) {
            printf("We found it! Index is: %d\n", i);
            return i;
        }
    }
    printf("We didn't find it\n");
    return -1;
}

int main() {
    int choice, key, place, rmplace, find;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Insert\n");
        printf("2. Delete\n");
        printf("3. Search\n");
        printf("4. Print Array\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to insert: ");
                scanf("%d", &key);
                printf("Enter the position to insert at (0 to %d): ", currentSize);
                scanf("%d", &place);
                insertarr(arr, key, place);
                break;

            case 2:
                printf("Enter the position to delete (0 to %d): ", currentSize - 1);
                scanf("%d", &rmplace);
                delarr(arr, rmplace);
                break;

            case 3:
                printf("Enter the value to search: ");
                scanf("%d", &find);
                linearSearch(arr, find);
                break;

            case 4:
                printf("Array contents:\n");
                printArray();
                break;

            case 5:
                printf("Exiting the program...\n");
                return 0;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
