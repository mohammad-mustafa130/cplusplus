#include <iostream>
#include <vector>
using namespace std;
int binarySearch(vector<int> arr, int target, int size) {
    int low = 0;
    int high = size - 1;

    while(low <= high) {
        int mid = low + (high - low) / 2;
        if(target > arr[mid]) low = mid+1;
        else if(target < arr[mid]) high = mid - 1;
        else return mid;
    }
    return -1;
}
int main() {
    vector<int> arr = {-1, 0, 3, 4, 5, 9, 12};
    int target = 4;
    int size = arr.size();
    int result = binarySearch(arr, target, size);
    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << result << endl;
    }
    return 0;
}