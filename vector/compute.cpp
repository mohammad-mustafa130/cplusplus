#include <iostream>
#include <vector>
using namespace std;

int compute(int x, int n) {
    int ans = 1;
    while(n > 0) {
        if(n % 10 == 1) ans *= x;
        x *= x;
        n = n / 10; 
    }
    return ans;
}
int main() {
    int x = 3, n = 5;
    int pow = 1, binform = 0;
    while(n > 0) {
        int rem = n % 2;
        binform += rem * pow;
        pow = pow * 10;
        n = n / 2;

    }
    cout << compute(x, binform) << endl;
}