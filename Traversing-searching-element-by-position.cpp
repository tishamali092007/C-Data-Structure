#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,element,found=0;

    cout << "Enter Size Of Array : ";
    cin >> size;

    cout << "Enter Array Element : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    cout << "Enter Element to search : ";
    cin >> element;

    for(i=0; i < size; i++){
        if(arr[i] == element){
            cout << "Element Found at Position " << i + 1 << endl;
            found = 1;
            break;
        }
    }
    if(found == 0){
        cout << "Element is not found in array.";
    }
    return 0;
}