#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr, int len) {
    for(int i = 1; i < len; i++) {
        int key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
void printArray(vector<int> &arr, int len) {
    for(int i = 0; i < len; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main() {
    vector<int> arr = {4,1,5,3};
    int len = arr.size();

    cout << "Original Array: " << endl;
    printArray(arr, len);

    insertionSort(arr, len);

    cout << "Sorted Array: " << endl;
    printArray(arr, len);
}