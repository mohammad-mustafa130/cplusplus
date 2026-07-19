#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<pair<int, int>> vec = {{1, 2},{3, 4},{5, 6}};

    vec.push_back({7,8});
    vec.emplace_back(7,8);

    for(auto p : vec) {
        cout << p.first << " " << p.second << endl;
    }

    return 0;
}