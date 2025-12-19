#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSumArray(const vector<int>& vec, int size) {
    int maxSum = INT_MIN;
    for(int i = 0; i < size; i++) {
        int currSum = 0;
        for(int j = i; j < size; j++) {
            currSum += vec[j];
            maxSum = max(currSum, maxSum);
        }
    }
    return maxSum;
}

int main() {
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};
    int size = vec.size();

    cout << "Maximum sum array = " << maxSumArray(vec, size) << endl;
    return 0;
    
}