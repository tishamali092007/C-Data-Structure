#include <iostream>
using namespace std;

void input(int arr[], int n) {
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
}

void display(int arr[], int n) {
    cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) cout << " ";
    }
    cout << endl;
}

// Linear Search Time Complexity:
// Best Case:    O(1)
// Average Case: O(n)
// Worst Case:   O(n)

void linearSearch(int arr[], int n, int key) {
    int comparisons = 0;
    int position = -1;

    for (int i = 0; i < n; i++) {
        comparisons++;
        if (arr[i] == key) {
            position = i + 1; 
            break;
        }
    }

    if (position != -1) {
        cout << "Element found at position: " << position << endl;
    } else {
        cout << "Element not found in array." << endl;
    }

    cout << "Total comparisons made: " << comparisons << endl;
}

int main() {
    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    if (n <= 0 || n > 100) {
        cout << "Invalid number of elements!" << endl;
        return 0;
    }

    int arr[100];

    input(arr, n);
    display(arr, n);

    int key;
    cout << "Enter element to search: ";
    cin >> key;

    linearSearch(arr, n, key);

    return 0;
}