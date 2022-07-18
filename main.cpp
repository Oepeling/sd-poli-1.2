#include <iostream>

using namespace std;

struct Node {
    int value;
    Node* next;
};


// insert la inceput
Node* insert_front(Node* start, int x) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->value = x;
    // <=> (*new_node).value = x;
    new_node->next = start;
//    start = new_node;
    return new_node;
}

Node* erase_front(Node* start) {
    if (start == NULL) { return start; }
    Node* to_be_deleted = start;
    start = start->next;
    delete to_be_deleted;
    return start;
}

Node* insert_back(Node* start, int x) {
    Node* new_node = (Node*) malloc(sizeof(Node));
    new_node->value = x;
    new_node->next = NULL;

    if (start == NULL) {
        return new_node;
    }

    Node* node = start;
    while (node->next != NULL) {
        node = node->next;
    }
    node->next = new_node;
    return start;
}

void print(Node* start) {
    for (Node* node = start; node != NULL; node = node->next) {
        cout << "( addr: " << node << ", val: " << node->value << " ) -> ";
    }
    cout << "NULL" << endl;
}

int main() {
    Node* start = NULL;
    print(start);

    start = insert_front(start, 3);
    start = insert_front(start, 4);
    cout << "inserare la inceput:\n  ";
    print(start);

    start = insert_back(start, 5);
    cout << "inserare la final:\n  ";
    print(start);

    start = erase_front(start);
    cout << "stergere la inceput:\n  ";
    print(start);

    return 0;
}