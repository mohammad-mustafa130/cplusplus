#include <iostream>
using namespace std;
pair<int, int> linearSearch(int matrix[][3], int row, int col, int key) {
    pair<int, int> p;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(matrix[i][j] == key) {
                return {i,j};
            }
        }
    }
    return {-1,-1};
}
int main() {
    int matrix[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,14}};
    int row = 4;
    int col = 3;

    int key = 83;
    cout << "Matrix: " << endl;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    pair<int, int> p = linearSearch(matrix, row, col, key);
    cout << "("<< p.first << ", " << p.second << ")" << endl;
    return 0;
}