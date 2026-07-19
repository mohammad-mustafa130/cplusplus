#include <iostream>
using namespace std;

string ifPalindrome(int n) {
    int cn = n;
    int revNum = 0;
    while(cn != 0) {
        int rem = cn % 10;
        revNum = (revNum*10) + rem;
        cn = cn / 10;
    }
    if(n == revNum) return "Palindrome Number";
    return "Not a palindrome number";
}

int main() {
    int num = 353;

    cout << ifPalindrome(num) << endl;

    return 0;
}