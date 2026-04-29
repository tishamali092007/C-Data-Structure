#include<iostream>
using namespace std;

int main(){

    int arr[50],size,i,pos,elements;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements : ";
    for(i=0; i < size - 1; i++){
        cin >> arr[i];
    }

    cout << "Enter Position : ";
    cin >> pos;

    for(i =  pos; i < size; i++){
        arr[i] = arr[i + 1];
    }

    size--;

    cout << "After deleting array : ";
    for(i=0; i < size; i++){
        
    }