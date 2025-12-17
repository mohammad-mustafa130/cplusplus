#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n, arr[50];
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter elements of array: ";
    for(int i = 0; i < n; i++)  {
        cin >> arr[i];
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int i = 0; i < n; i++) {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
    }
    cout << "Smallest element = " << smallest << endl;
    cout << "Largest element = " << largest << endl; 
    return 0;
}