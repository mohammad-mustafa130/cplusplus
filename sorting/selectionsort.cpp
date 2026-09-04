#include<iostream>
#include<vector>
using namespace std;

void selectionSort(vector<int> &arr, int len) {
    for(int i = 0; i < len-1; i++) {
        int minIndex = i;
        for(int j = i+1; j < len; j++) {
            if(arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[minIndex];
        arr[minIndex] = arr[i];
        arr[i] = temp;
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

    selectionSort(arr, len);

    cout << "Sorted Array: " << endl;
    printArray(arr, len);
}