#include<iostream>
using namespace std;

int main() {
    int n, marks[50];
    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements of array: ";
    for(int i = 0; i < n; i++) {
        cin >> marks[i];
    }

    cout << "Elements of array are: ";
    for(int i = 0; i < n; i++) {
        cout << marks[i] << " ";
    }
    cout << "\n";
    return 0;
}