#include <iostream>
#include "Header3.19.2.h"

int main() {
    int size;
    EnterSize(size);
    if (CheckSize(size)) {
        double* arr = new double[size];
        EnterArray(arr, size);
        int FirstMinIndex = -1, SecondMinIndex = -1;
        IndexSearch(arr, FirstMinIndex, SecondMinIndex, size);

        double sum = 0.0;
        Sum(arr, FirstMinIndex, SecondMinIndex, sum);

        delete[] arr;
    }
    else 
    {
        std::cout << " Uncorrect size \n";
    }
    return 0;
}
