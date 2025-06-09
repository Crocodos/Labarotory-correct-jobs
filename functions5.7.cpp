#include <iostream>

int findMinK(int** matrix, int size) {
    int K = matrix[0][0];
    int rowMin = 0;
    for (int i = 0; i < size; ++i) {
        
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] > matrix[rowMin][j])
            {
                rowMin = i;
            }
        }
       
    }
    for (int j = 0; j < size; ++j)
    {
        if (matrix[rowMin][j] > matrix[rowMin][j - 1])
        {
            K = matrix[rowMin][j] + 1;
        }
    }
    return K;
}

int findRowWithMinElement(int** matrix, int size) {
    int minElement = matrix[0][0];
    int minRowIndex = 0;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (matrix[i][j] < minElement)
            {
                minElement = matrix[i][j];
                minRowIndex = i;
            }
        }
    }
    return minRowIndex;
}

int findColumnWithMaxElement(int** matrix, int size) {
    int maxElement = matrix[0][0];
    int maxColumnIndex = 0;

    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < size; ++j) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
                maxColumnIndex = j;
            }
        }
    }
    return maxColumnIndex;
}


int scalarProduct(int** matrix, int rowIndex, int columnIndex, int size) {
    int product = 0;
    for (int i = 0; i < size; ++i) {
        product += matrix[rowIndex][i] * matrix[i][columnIndex];
    }
    return product;
}