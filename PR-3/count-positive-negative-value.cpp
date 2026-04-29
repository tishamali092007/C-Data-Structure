#include<iostream>
using namespace std;

int main(){

    int size,i,positive=0,negative=0;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        if(arr[i] >= 0){
            positive++;
        }
        else{
            negative++;
        }
    }

    cout << "Positive Values : " << positive << endl;
    cout << "Negative Values : " << negative;

    return 0;
}