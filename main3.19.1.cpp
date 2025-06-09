#include <iostream>
#include "Header3.19.1.h"

int main() {
    int size{};
    EnterSize(size);
    if (CheckSize(size)) 
    {
        double* arr = new double[size];
        EnterArray(arr, size);
        CountDifferentElements(arr, size);
        std::cout << " Number of different elements " << CountDifferentElements(arr, size) << '\n';

        delete[] arr;
    }
    else { std::cout << " Uncorrect size \n"; }
    return 0;
}