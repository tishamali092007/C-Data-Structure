#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,j,temp;

    cout << "Enter Size Of Array : ";
    cin >> size;

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    // Ascending Order
    for(i=0; i < size - 1; i++){
        for(j=0; j < size - 1; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr [j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Ascending Order : " ;
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    // Descending Order

    for(i = 0; i < size - 1; i++){
        for(j=0; j < size - 1; j++){
            if(arr[j] < arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "\nDescending Order : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}