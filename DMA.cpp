#include<iostream>
using namespace std;

class LinkedList {
    public:

        struct Node {
            int data;
            Node* next;


            Node(int val) {
                this->data = val;
                this->next = NULL;
            }
        };

        Node* Head;
        int count;

        LinkedList() {
            this->Head = NULL;
            this->count = 0;
        }

    void insert_at_beginning(int data) {
        Node* newNode = new Node(data);
        if(Head == NULL) {
            Head = newNode;
        }
        else {
            newNode->next = Head;
            Head = newNode;
        }
        count++;
        cout << "Element " << data << " Inserted at beginning successfully..!" << endl;
    } 
    
    void Search(int key) {
        if(Head == NULL) {
            cout << "List is Empty..!" << endl;
            return;
        }
        Node* ptr = Head;
        int position = 1;
        while (ptr != NULL) {
            if (ptr->data == key) {
                cout << "Element " << key << " Found at position " << position << "!" << endl;
                return;
            }
            ptr = ptr->next;
            position++;
        }
        cout << "Element " << key << " Not Found in The List" << endl;
    }

    void Delete_node(int key) {
        if (Head == NULL) {
            cout << "List is Empty!" << endl;
            return;
        }

        if(Head->data == key) {
            Node* temp = Head;
            Head = Head->next;
            delete temp;
            temp = NULL;
            count--;
            cout << "Element " << key << " Deleted successfully..!" << endl;
            return;
        }

        Node* ptr = Head;
        Node* prev = NULL;
        while (ptr != NULL && ptr->data != key) {
            prev = ptr;
            ptr = ptr->next;
        }

        if (ptr == NULL){
            cout << "Element " << key << " not Found in the list!" << endl;
            return;
        }

        prev->next = ptr->next;
        delete ptr;
        ptr = NULL;
        count--;
        cout << "Element " << key << " deleted successfully..!" << endl;
    }

    void reverse() {
        if (Head == NULL || Head->next == NULL) {
            cout << "Nothing to reverse!" << endl;
            return;
        }
        Node* prev = NULL;
        Node* current = Head;
        Node* nextNode = NULL;
        while (current != NULL) {
            nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
        }
        Head = prev;
        cout << "List reversed successfully..!" << endl;
    }

    void display() {
        if (Head == NULL) {
            cout << "List is Empty!" << endl;
            return;
        }
        Node* ptr = Head;
        cout << "Linked List : ";
        while (ptr != NULL) {
            cout << ptr->data;
            if(ptr->next != NULL) cout << " -> ";
            ptr = ptr->next;
        }
        cout << " -> Null" << endl;
        cout << "Total Element : " << count << endl;
    }

    ~LinkedList() {
        Node* current = Head;
        while (current != NULL) {
            Node* next = current->next;
            delete current;
            current = next;
        }
        cout << "Memory Cleaned..!" << endl;
    }
    };

    int main() {
        LinkedList list;
        int choice, data, key;

        do {
            cout << "===== Linked List Operation =====" << endl;
            cout << "1. Insert At Beginning" << endl;
            cout << "2. Search Element" << endl;
            cout << "3. Delete Node by key" << endl;
            cout << "4. Reverse List" << endl;
            cout << "5. Display List" << endl;
            cout << "0.Exit" << endl;
            cout << "enter Your choice : ";
            cin >> choice;

            switch(choice) {

                case 1:
                    cout << "Enter Element to Insert : ";
                    cin >> data;
                    list.insert_at_beginning(data);
                    break;

                case 2:
                    cout << "Enter Key to Search : ";
                    cin >> key;
                    list.Search(key);
                    break;
                    
                case 3:
                    cout << "Enter Key to Delete : ";
                    cin >> key;
                    list.Delete_node(key);
                    break;
                
                case 4:
                    list.reverse();
                    break;
                
                case 5:
                    list.display();
                    break;
                    
                case 0:
                    cout << "Thank you for using Linked List Operations..!" << endl;  
                    break;
                default :
                    cout << "Invalid Choice!" << endl;      
            }
        } while(choice != 0);

        return 0;

    }