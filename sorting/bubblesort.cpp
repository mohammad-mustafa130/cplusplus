#include<iostream>
#include<vector>
using namespace std;

void bubbleSort(vector<int> &arr, int len) {
    for(int i = 0; i < len-1; i++) {
        bool isSwap = false;
        for(int j = 0; j < len-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                isSwap = true;
            }
        }
        if(!isSwap) {
            return;
        }
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

    bubbleSort(arr, len);

    cout << "Sorted Array: " << endl;
    printArray(arr, len);
}