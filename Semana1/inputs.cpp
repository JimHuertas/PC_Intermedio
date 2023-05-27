#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < cols; j++){
            std::cin >> matrix[i][j];
        }
    }

    std::cout << "La matriz ingresada es: " << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++){
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}






