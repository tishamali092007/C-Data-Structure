#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int val) {
        data = val;
        next = NULL;
    }    
};

class LinkedList {
private:
    Node* head;
public:
    LinkedList() {
        head = NULL;
    }        

    void insertNode() {
        int choice;
        cout << "\n Where to insert?" << endl;
        cout << " 1. Beginning" << endl;
        cout << " 2. End" << endl;
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        if(choice != 1 && choice != 2) {
            cout << "Invalid choice..! Node Not Inserted...!" << endl;
            return;
        }

        int val;
        cout << "Enter Value : ";
        cin >> val;

        Node* newNode = new Node(val);

        if (choice == 1) {
            newNode->next = head;
            head = newNode;
            cout << "Inserted " << val << " at Beginning..!" << endl;
        }
        else {
            if (head == NULL) {
                head = newNode;
            }
            else {
                Node* temp = head;
                while (temp->next != NULL) {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
            cout << "Inserted " << val << "at End..!" << endl;
        }
    }

    void deleteFromBeginning() {
        if (head == NULL) {
            cout << "List is Empty..!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Deleted Element : " << temp->data << endl;
        head = head->next;
        delete temp;
    }

    void display() {
        if (head == NULL) {
            cout << "List is Empty..!" << endl;
            return;
        }
        Node* temp = head;
        cout << "Linked List: ";
        while (temp != NULL) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }

    ~LinkedList() {
        Node* current = head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        cout << "Memory Cleaned Successfully...!" << endl;
    }
};

int main() {
    LinkedList list;
    int choice;

    do{
        cout << "==== Singly Linked List Menu ====" << endl;
        cout << " 1. Insert Node " << endl;
        cout << " 2. Delete From Beginning " << endl;
        cout << " 3. Display List " << endl;
        cout << " 0. Exit " << endl;
        cout << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                list.insertNode();
                break;
            case 2:
                list.deleteFromBeginning();
                break;
            case 3:
                list.display();
                break;
            case 0:
                cout << "Program Ended..!" << endl;
                break;
            default :
                cout << "Invalid Choice..!" << endl;        
        }
    } while (choice != 0);

    return 0;

}