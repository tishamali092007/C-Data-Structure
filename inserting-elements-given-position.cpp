#include<iostream>
using namespace std;

int main(){

    int arr[50],size,i,pos,elements;

    cout << "Enter Size Of Array : ";
    cin >> size;

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

cout << "Enter Position : ";
cin >> pos;

cout << "Enter Elements : ";
cin >> elements;

for(i = size; i > pos; i--){
    arr[i] = arr[i - 1];
}

arr[pos] = elements;
size++;

cout << "New array : ";
for(i = 0; i < size; i++){
    cout << arr[i] << " ";
}

return 0;

}