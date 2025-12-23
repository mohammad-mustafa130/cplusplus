#include <iostream>
#include <vector>
using namespace std;

int maximumArea(vector<int>& height) {
    int maxArea = 0;
    for(int i = 0; i < height.size() - 1; i++) {
        for(int j = i+1; j < height.size(); j++) {
            int h = min(height[i], height[j]);
            int w = j - i;
            int area = h * w;
            maxArea = max(maxArea, area);
        }
    }
    return maxArea;

}
int main() {
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maximumArea(height) << endl;
    return 0;
}