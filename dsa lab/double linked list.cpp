#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *prev;
    Node *next;
};

class DoublyLinkedList {
private:
    Node *head;
public:
    DoublyLinkedList() {
        head = NULL;
    }

    void insertAtBeginning(int data) {
        Node *temp = new Node();
        temp->data = data;
        temp->prev = NULL;
        temp->next = head;
        if (head != NULL) {
            head->prev = temp;
        }
        head = temp;
    }

    void insertAtEnd(int data) {
        Node *temp = new Node();
        temp->data = data;
        temp->next = NULL;
        if (head == NULL) {
            temp->prev = NULL;
            head = temp;
            return;
        }
        Node *last = head;
        while (last->next != NULL) {
            last = last->next;
        }
        last->next = temp;
        temp->prev = last;
    }

    void deleteNode(int key) {
        Node *temp = head;
        if (temp != NULL && temp->data == key) {
            head = temp->next;
            if (head != NULL) {
                head->prev = NULL;
            }
            delete temp;
            return;
        }
        while (temp != NULL && temp->data != key) {
            temp = temp->next;
        }
        if (temp == NULL) {
            return;
        }
        temp->prev->next = temp->next;
        if (temp->next != NULL) {
            temp->next->prev = temp->prev;
        }
        delete temp;
    }

    void printList() {
        Node *temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;

    dll.insertAtEnd(6);
    dll.insertAtBeginning(7);
    dll.insertAtBeginning(1);
    dll.insertAtEnd(4);
    dll.insertAtEnd(9);

    cout << "Original List: ";
    dll.printList();

    dll.deleteNode(6);
    cout << "List after deleting 6: ";
    dll.printList();

    dll.deleteNode(1);
    cout << "List after deleting 1: ";
    dll.printList();

    dll.deleteNode(9);
    cout << "List after deleting 9: ";
    dll.printList();

    return 0;
}

