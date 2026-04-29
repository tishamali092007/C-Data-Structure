#include<iostream>
using namespace std;

class stack {
    private:
        int arr[100],topIndex,capacity;

    public:
        stack(int size) {
            capacity = size;
            topIndex = -1;
        }    

        void push(int value) {
            if (topIndex == capacity - 1) {
                cout << "Stack is Full. Cannot push.\n";
                return;
            }
            topIndex++;
            arr[topIndex] = value;
            cout << "Pushed: " << value << "\n";
        }

        void pop() {
            if (topIndex == -1) {
                cout << "stack is Empty. Nothing to pop.\n";
                return;
            }
            cout << "Popped: " << arr[topIndex] << "\n";
            topIndex--;
        }

        void top() {
            if (topIndex == -1) {
                cout << "stack is Empty. No top element.\n";
                return;
            }
            cout << "top element: " << arr[topIndex] << "\n";
        }

        void isEmpty() {
            if (topIndex == -1)
                cout << "Stack is Empty.\n";
            else
                cout << "Stack is Not Empty.\n";
        }

        void isFull() {
            if (topIndex == capacity - 1)
                cout << "Stack is Full.\n";
            else
                cout << "Stack is Not full.\n";
        }

        void display() {
            if (topIndex == -1) {
                return;
            }
            cout << "Stack (top -> bottom): ";
            for (int i = topIndex; i >= 0; i--) {
                cout << arr[i];
                if(i != 0) cout << " -> ";
            }
            cout << "\n";
        }
};

int main() {

    int capacity;

    cout << "=====================================\n";
    cout << "      Stack IMPLEMENTATION LAB       \n";
    cout << "=====================================\n";
    cout << "Enter stack capacity (max 100): ";
    cin >> capacity;

    stack s(capacity);

    int choice, value;

    do{
        cout <<"\n------- MENU -------\n";
        cout << " 1. Push an element\n";
        cout << " 2. Pop an element\n";
        cout << " 3. Dispaly top element\n";
        cout << " 4. check if stack is empty\n";
        cout << " 5. check if stack is full\n";
        cout << " 6. Display all elements\n";
        cout << " 0. Exit\n";
        cout << "Enter Your choice : ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            
            case 2:
                s.pop();
                break; 
                
            case 3:
                s.top();
                break; 
                
            case 4:
                s.isEmpty();
                break; 
                
            case 5:
                s.isFull();
                break; 
                
            case 6:
                s.display();
                break;  
                
            case 0:
               cout << "Exiting Program. Goodbye!\n";
                break;     
            default:
                cout << "Invalid choice. please try again.\n";   
        }
    }while(choice != 0);

    return 0;

}