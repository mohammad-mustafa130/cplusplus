#include <iostream>
using namespace std;

int main() {
    int matrix[4][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}};
    int row = sizeof(matrix) / sizeof(matrix[0]);
    int col = sizeof(matrix[0]) / sizeof(matrix[0][0]);
    int sum = 0;

    for(int i = 0; i < row; i++) {
        sum += matrix[i][i];
        if(i != col-1-i) sum += matrix[i][col-1-i];
    }
    cout << "Sum = " << sum << endl;
}
    
