#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter character: ";
    cin >> ch;

    if(ch >= 65 && ch <= 90) {
        cout << "Upper case\n";
    } else if(ch >= 97 && ch <= 122) {
        cout << "Lower case\n";
    } else {
        cout << "Enter valid character";
    }
}