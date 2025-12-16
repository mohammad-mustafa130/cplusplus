#include <iostream>
using namespace std;

int main() {
    bool isPrime = true;
    int n;
    cout << "Enter number: ";
    cin >> n;
    if(n <= 1) isPrime = false;
    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            isPrime = false;
            break;
        }
    }
    if(isPrime == true) {
        cout << n << " is prime number\n";
    } else {
        cout << n<< " is non-prime number\n";
    }
}