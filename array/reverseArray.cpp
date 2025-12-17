#include <iostream>
using namespace std;

void reverseArray(int arr[], int size) {
    int i = 0, j = size - 1;
    while(i < j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Array before reverse: ";
    printArray(arr, size);

    reverseArray(arr, size);

    cout << "Array after reverse: ";
    printArray(arr, size);
    
    return 0;
}