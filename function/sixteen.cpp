#include<iostream>
using namespace std;

int sum(int a, int b) {
    return a+b;
}
int main() {
    int result = sum(5, 3);
    cout << "Result = " << result << endl;
    return 0;
}