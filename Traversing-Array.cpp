#include<iostream>
using namespace std;

int main(){

    int size,i,arr[100];

    cout << "Enter Size Of Array : ";
    cin >> size;

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Array Elements Are : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}