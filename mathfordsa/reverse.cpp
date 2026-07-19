#include <iostream>
using namespace std;

int reverseNum(int n) {
    int sum = 0;
    while(n != 0) {
        int rem = n % 10;
        sum = rem + (sum * 10);
        n = n / 10;
    }
    return sum;
}

int main() {
    int num = 4537;

    cout << "Original Number = " << num << endl;
    cout << "Reversed Number = " << reverseNum(num) << endl;

    return 0;
}