#include <iostream>
#include <vector>
using namespace std;

void reverseArray(vector<int>& vec) {
    int i = 0, j = vec.size() - 1;
    while(i < j) {
        int temp = vec[i];
        vec[i] = vec[j];
        vec[j] = temp;
        i++;
        j--;
    }
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5, 6};
    cout << "Vector before reverse: ";
    for(int i : vec) {
        cout << i << " ";
    }
    cout << endl;

    reverseArray(vec);

    cout << "Vector after reverse: ";
    for(int i : vec) {
        cout << i << " ";
    }
    cout << endl;

}