#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int> &arr, int start, int mid, int end) {
    vector<int> temp;
    int i = start, j = mid+1;
    while(i <= mid && j <= end) {
        if(arr[i] <= arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }
    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }
    for(int i = 0; i < temp.size(); i++) {
        arr[i+start] = temp[i];
    }
}
void mergeSort(vector<int> &arr, int start, int end) {
    if(start < end ) {
        int mid = start + (end - start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);
        merge(arr, start, mid, end);
    }
}
int main() {
    vector<int> arr = {12, 31, 35, 8, 32, 17};
    int start = 0;
    int end = arr.size() - 1;
    cout << "Original Array: " << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(arr, start, end);

    cout << "Sorted Array: " << endl;
    for(int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

}