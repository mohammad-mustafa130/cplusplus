#include<iostream>
using namespace std;

int sumOfDigit(int n) {
    int sum = 0;
    while(n > 0) {
        int rem = n % 10;
        sum += rem;
        n = n / 10;
    }
    return sum;

}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Sum of digits = " << sumOfDigit(n) << endl;
    return 0;
}