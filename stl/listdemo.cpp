#include <iostream>
#include <list>
using namespace std;

int main() {
    list<int> l = {1,2,3,4,5};

    for(int i: l) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}