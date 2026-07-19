#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec = {1,2,3,4,5};

    for(int i: vec) {
        cout << i << " ";
    }
    cout << endl;

    cout << *(vec.begin()) << endl;
    cout << *(vec.end()-1) << endl;
    
    return 0;
}