#include <iostream>
#include <vector>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int product = 1;
    for(int i = 0; i < nums.size(); i++) {
        product *= nums[i];
    }
    for(int i = 0; i < nums.size(); i++) {
        nums[i] = product / nums[i];
    }
    return nums;
}
int main() {
    vector<int> nums = {1, 2, 3, 4};
    vector<int> ans = productExceptSelf(nums);
    for(int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}