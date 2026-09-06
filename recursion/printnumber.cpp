#include<iostream>
using namespace std;

void printNumber(int n) {
    cout << n << " ";
    if(n == 1) {
        cout << endl;
        return;
    }
    printNumber(n-1);

}
int main() {
    int n = 10;
    printNumber(n);
}