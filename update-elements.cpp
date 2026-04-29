#include<iostream>
using namespace std;

int main(){

    int arr[100],size,i,pos,value;

    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter array elements : ";
    for(i=0; i < size; i++){
        cin  >> arr[i];
    }

    cout << "Enter Position : ";
    cin >> pos;

    cout << "Enter new value : ";
    cin >> value;

    if(pos >= 0 && pos < size){
        arr[pos] = value;
    }
    else{
        cout << "Invalid Position..!";
        return 0;
    }

    cout << "\n Updated array : ";
    for(i=0; i < size; i++){
        cout << arr[i] << " ";
    }

    return 0;
}