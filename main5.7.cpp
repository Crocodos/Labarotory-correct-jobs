#include <iostream>  
#include "Header5.7.h" 
using namespace std; 

int main() 
{ 
    int size; 
    cout << " Enter size of matrix \n"; 
    cin >> size; 

    cout << " Enter elements of matrix \n";
    int** matrix = new int* [size]; 
    for (int i = 0; i < size; i++)
    { 
        matrix[i] = new int[size];
    }

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    for (int i = 0; i < size; ++i)
    {
        cout << " \n";
        for (int j = 0; j < size; ++j)
        {
            cout << matrix[i][j];
        }
    }
    cout << '\n';

    int rowIndex = findRowWithMinElement(matrix, size); // Вызов функции для поиска строки с минимальным элементом
    int columnIndex = findColumnWithMaxElement(matrix, size); // Вызов функции для поиска столбца с максимальным элементом
    int product = scalarProduct(matrix, rowIndex, columnIndex, size); // Вычисление скалярного произведения строки и столбца
    int minK = findMinK(matrix, size); // Вызов функции для нахождения минимального значения K

    cout << "\nSkalyarnoye proizvedenie: " << product << '\n';
    cout << "The smallest K: " << minK << '\n';
    return 0;
}