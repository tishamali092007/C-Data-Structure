// Quick Sort Time Complexity:
// Best Case : O(n log n)
//Average Case : O(n log n)
//Worst Case : O(n^2)
//Space : O(log n) recursive stack

#include<iostream>
using namespace std;

void partition(int arr[], int low, int high, int &pi){
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++){
        if(arr[j] <= pivot) {
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;
    pi = i + 1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi;
        partition(arr, low, high, pi);
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void input(int arr[], int n){
    cout << "Enter " << n << " element : "<< endl;
    for(int i = 0; i < n; i++){
        cout << "Element [" << i << "] : ";
        cin >> arr[i];
    }
}

void display(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i];
        if(i < n - 1) 
        cout << " ";
    }
    cout << endl;
}

int main(){

    int n;
    cout << "Enter Number of Element :";
    cin >> n;

    int arr[200];

    input(arr,n);
    cout << "Before Sorting : ";
    display(arr,n);
    quickSort(arr, 0, n - 1);
    cout << "After Sorting : ";
    display(arr,n);

    return 0;
}