#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int maxSumArray(const vector<int>& vec) {
    int maxSum = INT_MIN;
    int currSum = 0;
    for(int i = 0; i < vec.size(); i++)  {
        currSum += vec[i];
        maxSum = max(currSum, maxSum);
        if(currSum < 0) {
            currSum = 0;
        }

    }
    return maxSum;
}

int main() {
    vector<int> vec = {3, -4, 5, 4, -1, 7, -8};

    cout << "Max sum array = " << maxSumArray(vec) << endl;

    return 0;
}