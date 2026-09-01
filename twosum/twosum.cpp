#include <iostream>
#include <vector>
using namespace std;
vector<int> twoSum(vector<int> v, int tar) {
    for(int i = 0; i < v.size(); i++) {
        for(int j = i+1; j < v.size(); j++) {
            if(tar == v[i]+v[j]) return {i,j};
        }
    }
    return {-1,1};
}
int main() {
    vector<int> v = {3, 2, 3};
    int tar = 6;

    vector<int> res = twoSum(v, tar);
    for(int i : res) {
        cout << i << " ";
    }
    cout << endl;
}