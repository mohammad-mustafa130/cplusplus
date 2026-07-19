#include <iostream>
using namespace std;

int isPrime(int num) {
    int count = 0;
    for(int n = 2; n <= num ; n++) {
        bool isPr= true;
        for(int i = 2; i*i <= n; i++) {
            if(n % i == 0) {
                isPr = false;
                break;
            }
        }
        if(isPr) count++;
    }
    return count;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << isPrime(num) << endl;
    
}