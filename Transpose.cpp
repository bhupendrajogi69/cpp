#include <iostream>

using namespace std;

int main() {
    int rows,cols;
    cout<<"Enter no of rows:";
cin>>rows;
cout<<"Enter no of cols:"<<endl;
cin>>cols;
    int matrix[rows][cols];
    // Input matrix elements
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << "Enter element at position (" << i + 1 << ", " << j + 1 << "): ";
            cin >> matrix[i][j];
        }
    }
    // Display original matrix
    cout << "Original matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    // Transpose the matrix
    int transpose[cols][rows];
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            transpose[i][j] = matrix[j][i];
        }
    }
    // Display transposed matrix
    cout << "Transposed matrix:" << endl;
    for (int i = 0; i < cols; ++i) {
        for (int j = 0; j < rows; ++j) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }
return 0;
}