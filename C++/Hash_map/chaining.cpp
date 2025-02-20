 
#include <iostream>
#include <vector>
using namespace std;

// Node structure for chaining
struct Node {
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

// Create hash table
vector<Node*> table(5, nullptr);

// Get value
int getValue() {
    int value;
    cout << "Please enter your value (or -1 to exit): ";
    cin >> value;
    return value;
}

// Create hash function
int hashFunc(int value) {
    return value % 5; // Hash function to get the key
}

// Chain function
void chainFunc(Node* &head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

// Insert in table
void insert(int value) {
    int key = hashFunc(value);
    if (table[key] == nullptr) {
        table[key] = new Node(value);
    } else {
        chainFunc(table[key], value);
    }
}

// Display table
void displayTable() {
    for (int i = 0; i < 5; ++i) {
        cout << "Key " << i << ": ";
        Node* temp = table[i];
        while (temp != nullptr) {
            cout << temp->value << " -> ";
            temp = temp->next;
        }
        cout << "nullptr" << endl;
    }
}

int main() {
    while (true) {
        int value = getValue();
        if (value == -1) {
            break; // Exit the loop if the user enters -1
        }
        insert(value);

        // Display the hash table
        displayTable();
    }

    // Clean up memory
    for (int i = 0; i < 5; ++i) {
        Node* temp = table[i];
        while (temp != nullptr) {
            Node* next = temp->next;
            delete temp;
            temp = next;
        }
    }

    return 0;
}
