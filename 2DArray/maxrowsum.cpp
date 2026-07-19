#include <iostream>
#include <climits>
using namespace std;

int maxColumnSum(int matrix[][3], int row, int col) {
    int ans = INT_MIN; 
    for(int i = 0; i < row; i++) {
        int sum = 0;
        for(int j = 0; j < col; j++) {
            sum += matrix[j][i];
        }
        ans = max(ans, sum);
    }
    return ans;
}
int main() {
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    cout << maxColumnSum(matrix, row, col) << endl;

    return 0;
}