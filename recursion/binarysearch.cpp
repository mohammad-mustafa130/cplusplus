#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int> arr, int low, int high, int tar) {
    if(low < high) {
        int mid = low + (high-low)/2;
        if(arr[mid] == tar) {
            return mid;
        } else if(arr[mid] < tar) {
            binarySearch(arr, mid+1, high, tar);
        } else {
            binarySearch(arr, low, mid-1, tar);
        }
    }
    return -1;
}
int main() {
    vector<int> arr = {-1,0,3,5,9,12};
    int low = 0;
    int high = arr.size()-1;
    int target = 3;

    int res = binarySearch(arr, low, high, target);
    if(res == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index " << res << endl;
    }
    return 0;
}