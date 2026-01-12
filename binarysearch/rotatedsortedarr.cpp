#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int tar, int low, int high) {
    while(low <= high) {
        int mid = low + (high - low) / 2;

        if(tar == arr[mid]) return mid;

        if(arr[low] <= arr[mid]) {
            if(tar >= arr[low] && tar <= arr[mid]) return binarySearch(arr, tar, low, mid-1);
            else return binarySearch(arr, tar, mid+1, high);
        } else {
            if(tar >=arr[mid] && tar <= arr[high]) return binarySearch(arr, tar, mid+1, high);
            else return binarySearch(arr, tar, low, mid-1);
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {6, 7, 0, 1, 2, 3, 4, 5};
    int tar = 0;
    int low = 0;
    int high = arr.size() - 1;

    int result = binarySearch(arr, tar, low, high);

    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
}