#include <iostream>
#include <vector>
using namespace std;

int majorityElement(const vector<int>& nums) {
    int n = nums.size();
    int freq = 0, ans = 0;
    for(int i = 0; i < n; i++) {
        if(freq == 0) ans = nums[i];
        if(ans == nums[i]) freq++;
        else freq--;
    }
    return ans; 
}
int main() {
    vector<int> nums = {1, 2, 2, 1, 1, 2, 2, 3, };
    cout << "Majority Element = " << majorityElement(nums) << endl;
    return 0;
}