#include <iostream>
using namespace std;

int printDigit(int n) {
    int sum = 0;
    while(n > 0) {
        int rem = n % 10;
        sum += rem*rem*rem;
        n = n / 10;
    }
    return sum;
}
int main() {
    int n = 1;
    
    int res = printDigit(n);

    if(res == n) {
        cout << "Armstrong Number" << endl;
    } else {
        cout << "Not a armstrong number" << endl;
    }

    return 0;
}