#include<iostream>
using namespace std;

int decToBinary(int n) {
    int ans = 0, pow = 1;
    while(n > 0) {
        int rem = n % 2;
        n = n / 2;
        ans += rem * pow;
        pow *= 10;
    }
    return ans;
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Binary Number  = " << decToBinary(n) << endl; 
   return 0;
}