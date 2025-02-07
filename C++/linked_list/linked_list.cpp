 
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int action() {
    int actions;
    cout << "Choose action: 1.add to linked list 2.remove from linked list 3.see the linked list 4.exit: ";
    cin >> actions;
    return actions;
}

int getData() {
    int data;
    cout << "Please enter the data: ";
    cin >> data;
    return data;
}

void addNode(Node*& head, int data) {
    Node* newNode = new Node;
    newNode->data = data;
    newNode->next = head;
    head = newNode;
}

void removeNode(Node*& head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    Node* temp = head;
    head = head->next;
    delete temp;
    cout << "Node removed from the list." << endl;
}

void displayList(Node* head) {
    if (head == nullptr) {
        cout << "List is empty." << endl;
        return;
    }
    cout << "Linked List: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;

    while (true) {
        int actions = action();
        switch (actions) {
            case 1:
                addNode(head, getData());
                break;
            case 2:
                removeNode(head);
                break;
            case 3:
                displayList(head);
                break;
            case 4:
                while (head != nullptr) {
                    removeNode(head);
                }
                return 0;
            default:
                cout << "Invalid action, try again." << endl;
                break;
        }
    }
    return 0;
}
