#include<iostream>
using namespace std;

int main(){

    int even[100],odd[100],i,j,size,temp;
    int e=0,o=0;

    cout << "Enter Size Of Array : ";
    cin >> size;

    int arr[size];

    cout << "Enter Array Elements : ";
    for(i=0; i < size; i++){
        cin >> arr[i];
    }

    // separate even and odd 

    for(i=0; i < size; i++){
        if(arr[i] %2 == 0){
            even[e++] = arr[i];
        }
        else{
            odd[o++] = arr[i];
        }
    }

    // even number in ascending order

    for(i=0; i < e - 1; i++){
        for(j=0; j < e - 1; j++){
            if(even[j] > even[j + 1]){
                temp = even[j];
                even[j] = even[j + 1];
                even[j + 1] = temp;
            }
        }
    }

    // Odd numbers in descending order

    for(i=0; i < o - 1; i++){
        for(j=0; j < o - 1; j++){
            if(odd[j] < odd[j + 1]){
                temp = odd[j];
                odd[j] = odd[j + 1];
                odd[j + 1] = temp;
            }
        }
    }

    // merge & display

    cout << "Final Output : ";

    for(i=0; i < e; i++){
        cout << even[i] << " ";
    }

    for(i=0; i < o; i++){
        cout << odd[i] << " ";
    }

    return 0;
}