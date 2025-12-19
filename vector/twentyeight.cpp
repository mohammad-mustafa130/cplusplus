#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int>& vec, int target)  {
    for(int i = 0; i < vec.size(); i++){
        if(vec[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    vector<int> vec = {3, 1, 9, 2, 0, 5};
    int target = 9;

    int result = linearSearch(vec, target);
    if(result == -1) {
        cout << "Element not found" << endl;
    } else {
        cout << "Element found at index = " << result << endl;
    }
    return 0;
}