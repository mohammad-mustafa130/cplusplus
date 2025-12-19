#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& vec, int size) {
    for(int i : vec) {
        int freq = 0;
        for(int j : vec) {
            if(i == j) {
                freq++;
            }
        }
        if(freq > size / 2) return i;
    }
    return -1;
}
int main() {
    vector<int> vec = {1, 2, 2, 1, 1, 1};
    int size = vec.size();

    cout << "Majority element = " << majorityElement(vec, size) << endl;
    return 0;
}