#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if(a == 0) return b;
    if(b == 0) return a;

    if(a == b) {
        return a;
    } else if(a > b) {
        return gcd(a%b, a);
    } else {
        return gcd(a, b%a);
    }
}
int lcm(int a, int b) {
    return (a*b) / gcd(a,b);
}
int main() {
    int a = 20, b = 28;
    
    cout << gcd(a, b) << endl;
    cout << lcm(a,b) << endl;

    return 0;
}