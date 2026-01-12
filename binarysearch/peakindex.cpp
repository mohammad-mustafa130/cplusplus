#include <iostream>
#include <vector>
using namespace std;

int search(vector<int> nums) {
    for(int i = 0; i < nums.size(); i++) {
        if(nums[i] < nums[i+1] && nums[i+1] > nums[i+2]) {
            return nums[i+1];
        }
    }
    return -1;
}
int main() {
    vector<int> nums = {0, 3, 8, 9, 5, 2};
    cout << "Peak index = " << search(nums) << endl;
    return 0;
}