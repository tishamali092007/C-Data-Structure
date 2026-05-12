#include<iostream>
using namespace std;

class Queue {
    private:
        int front,rear,size;
        int* arr;

    public:
        Queue(int s) {
            size = s;
            arr = new int[size];
            front = -1;
            rear = -1;
        }    

        void enqueue(int value) {

            if ((rear + 1) % size == front) {
                cout << "Queue Overflow! Cannot insert element." << endl;
                return;
            }

            if (front == -1) {
                front = rear = 0;
            }
            else{
                rear = (rear + 1) % size;
            }
            arr[rear] = value;
            cout << "Enqueued: " << value << endl;
        }

        void dequeue() {
            
            if (front == -1) {
                cout << "Queue Underflow..! Can't delete Element." << endl;
                return;
            }

            cout << "Dequeued: " << arr[front] << endl;

            if (front == rear) {
                front = rear = -1;
            }
            else{
                front = (front + 1) % size;
            }
        }

        void display() {

            if(front == -1) {
                cout << "Queue is Empty..!" << endl;
                return;
            }

            cout << "Queue: ";

            int i = front;
            while (true) {
                cout << arr[i] << " ";
                if (i == rear) break;
                i = (i + 1) % size;
            }

            cout << endl;
        }

        ~Queue() {
            delete[] arr;
        }        
};

int main() {
    int size, choice, value;

    cout << "Enter Queue Size: ";
    cin >> size;

    Queue q(size);

    do {
        cout << "\n--- Queue Menu ---" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                cin >> value;
                q.enqueue(value);
                break;

            case 2:
                q.dequeue();
                break;

            case 3:
                q.display();
                break;

            case 0:
                cout << "Program Ended!" << endl;
                break;

            default:
                cout << "Invalid choice!" << endl;
        }

    } while (choice != 0);

    return 0;
}