#include<iostream>
using namespace std;

int main(){

    int size,i,average=0,count=0,sum=0;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    for(i=0; i < size; i++){
        if(arr[i] >=0 ){
            sum = sum + arr[i];
            count++;
        }
    }

    if(count > 0){
        average = sum / count;
        cout << " average of positive numbers : " << average << endl;
    }
    else{
        cout << "positive numbers not found..! ";
    }

    return 0;
}