#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target, int low, int high) {
    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(target > arr[mid]) return binarySearch(arr, target, mid+1, high);
        else if(target < arr[mid]) return binarySearch(arr, target, low, mid-1);
        else return mid;
    }
    return -1;
}
int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 4;
    int low = 0;
    int high = arr.size() - 1;

    int result = binarySearch(arr, target, low, high);

    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}