#include<iostream>
using namespace std;

int binarytoDec(int n) {
    int ans = 0, pow = 1;
    while(n > 0) {
        int rem = n % 2;
        ans += rem * pow;
        pow *= 2;
        n = n / 10;
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter binary number: ";
    cin >> n;
    
    cout << "Decimal number = " << binarytoDec(n) << endl;
    return 0;
}