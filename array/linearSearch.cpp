#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int target = 8;
    int size = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, size, target);

    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index = " << result << endl;
    }
    return 0;
}