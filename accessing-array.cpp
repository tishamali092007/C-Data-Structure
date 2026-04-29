#include<iostream>
using namespace std;

int main(){

    int size,i;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    cout << "\n Using Index : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    cout << "\n Using pointer : ";
    for(i=0;i < size;i++){
        cout << *(arr + i) << " ";
    }

    cout << "\n Using rangeloop : ";
    for(int x : arr){
        cout << x << " ";
    }

    return 0;
}