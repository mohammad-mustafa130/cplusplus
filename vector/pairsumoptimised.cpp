#include <iostream>
#include <vector>
using namespace std;


vector<int> pairSum(const vector<int>& vec, int target) {
    vector<int> ans;
    int i = 0;
    int j = vec.size() - 1;
    while(i < j) {
        int sum = vec[i] + vec[j];
        if(sum > target) j--;
        else if(sum < target) i++;
        else {
            ans.push_back(i);
            ans. push_back(j);
            return ans;
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(vec, target);
    cout << "Pair sum found at index " << ans[0] << " & " << ans[1] << endl;
    return 0;
}