#include <iostream>
#include <vector>
using namespace std;

vector<int> pairSum(const vector<int>& vec, int target) {
    vector<int> ans;
    for(int i = 0; i < vec.size() - 1; i++) {
        for(int j = i+1; j < vec.size(); j++) {
            if(vec[i] + vec[j] == target) {
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}
int main() {
    vector<int> vec = {2, 7, 11, 15};
    int target = 13;

    vector<int> ans = pairSum(vec, target);
    cout << "Pair found at index  " << ans[0] << " & " << ans[1] << endl;
    return 0;
}