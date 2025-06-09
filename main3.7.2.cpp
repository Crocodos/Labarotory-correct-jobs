#include <iostream>
#include "Header3.7.2.h"

int main() {
    int size;
    EnterSize(size);
    if (CheckSize(size)) {
        double* arr = nullptr;
        CreateArray(arr, size);
        EnterArray(arr, size);
        int FirstPosIndex = -1, SecondPosIndex = -1;
        IndexSearch(arr, FirstPosIndex, SecondPosIndex, size);

        double sum = 0;
        Sum(arr, FirstPosIndex, SecondPosIndex, sum);

        DeleteArray(arr);
    }
    else 
    {
        std::cout << " Error: size is very small ";
    }
    return 0;
}
