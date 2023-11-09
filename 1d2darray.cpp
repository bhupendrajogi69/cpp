#include <iostream>

int main() {
    int n;
    std::cout << "Enter the size of the 1D array: ";
    std::cin >> n;
    int arr1D[n];
    std::cout << "Enter " << n << " elements for the 1D array:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> arr1D[i];
    }
    std::cout << "1D Array elements: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr1D[i] << " ";
    }
    
    int rows, cols;
    std::cout << "\n Enter the number of rows for the 2D array: ";
    std::cin >> rows;
    std::cout << "Enter the number of columns for the 2D array: ";
    std::cin >> cols;
    int arr2D[rows][cols];
    std::cout << "Enter " << rows * cols << " elements for the 2D array:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> arr2D[i][j];
        }
    }
    std::cout << "2D Array elements:\n";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << arr2D[i][j] << " ";
        }
        std::cout << "\n";
    }
return 0;
}