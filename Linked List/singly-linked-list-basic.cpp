#include<iostream>
using namespace std;

int main(){

    class Node{
        public :
            int data;
            Node *next;
    };

    Node *HEAD = NULL;
    HEAD = new Node();
    HEAD -> data = 25;
    HEAD -> next = NULL;

    cout << "ADDRESS OF NODE IS : " << HEAD << endl;
    cout << "Value of Node is : " << HEAD -> data << endl;

    return 0;
}