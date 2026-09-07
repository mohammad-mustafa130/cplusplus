#include <iostream>
using namespace std;

int* arr;

int fib(int n) {
    if (n == 0 || n == 1) {
        return n;
    }
    if (arr[n] != -1) {
        return arr[n];
    }
    arr[n] = fib(n - 1) + fib(n - 2);
    return arr[n];
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    arr = new int[n];

    for (int i = 0; i < n; i++)
        arr[i] = -1;

    for (int i = 0; i < n; i++) {
        cout << fib(i) << " ";
    }
    cout << endl;
    return 0;
}