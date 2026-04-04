#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};

    for(auto it = vec.begin(); it != vec.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    for(auto it = vec.rbegin(); it != vec.rend(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
    return 0;
}