#include<iostream>
using namespace std;

int minOfTwo(int a, int b) {
    if(a < b) {
        return a;
    } else {
        return b;
    }
}
int main() {
    cout << minOfTwo(5, 10) << endl;
    return 0;
}