#include<iostream>
using namespace std;

int main(){

    int size,i,even=0,odd=0;

    cout << "Enter Size of array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        if(arr[i] %2 == 0){
            even++;
        }
        else{
            odd++;
        }
    }

    cout << "Even numbers : " << even << endl;
    cout << "odd numbers : " << odd << endl;

    return 0;
}