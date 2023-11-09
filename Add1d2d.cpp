#include <iostream>
int main() {
    int n;
    std::cout << "Enter the size of the 1D arrays: ";
    std::cin >> n;
    int arr1D1[n], arr1D2[n];
    std::cout << "Enter " << n << " elements for the first 1D array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1D1[i];
    }
    std::cout << "Enter " << n << " elements for the second 1D array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1D2[i];
    }
    int result1D[n];
    for (int i = 0; i < n; i++) {
        result1D[i] = arr1D1[i] + arr1D2[i];
    }
    std::cout << "Result of adding the 1D arrays: ";
    for (int i = 0; i < n; i++) {
        std::cout << result1D[i] << " ";
    }
    std::cout << "\n";
    int rows, cols;
    std::cout << "Enter the number of rows for the 2D arrays: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns for the 2D arrays: ";
    std::cin >> cols;
    int arr2D1[rows][cols], arr2D2[rows][cols];
    std::cout << "Enter " << rows * cols << " elements for the first 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr2D1[i][j];
        }
    }
    std::cout << "Enter " << rows * cols << " elements for the second 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr2D2[i][j];
        }
    }
    int result2D[rows][cols];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result2D[i][j] = arr2D1[i][j] + arr2D2[i][j];
            
        }
    }
    std::cout << "Result of adding the 2D arrays:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << result2D[i][j] << " ";
        }
        std::cout << "\n";
    }
return 0;
}