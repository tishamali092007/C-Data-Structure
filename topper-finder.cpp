#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i;

    cout << "Enter Size Of Array : ";
    cin >> size;

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    for(i=0; i < size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    int second = -1;
    for(i=0; i < size; i++){
        if(arr[i] > second && arr[i] < largest ){
            second = arr[i];
        }
    }

    cout << "Largest : " << largest << endl;
    cout << "Second Largest : " << second;

    return 0;
}