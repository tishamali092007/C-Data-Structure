#include<iostream>
using namespace std;

int main(){

    int size,i,sum=0,count=0;

    cout << "Enter Size of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Arrayv Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        if(arr[i] %2 == 0){
            sum = sum + arr[i];
            count++;
        }
    }

    if(count == 0){
        cout << "even numbers not found..! ";
    }
    else{
        cout << "sum of even numbers : " << sum << endl;
    }

    return 0;
}