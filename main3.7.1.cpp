#include <iostream>
#include "Header3.7.1.h"

int main() {
    int size{};
    try {
        EnterSize(size);
        if (CheckSize)
        {

            double* arr = new double[size];


            EnterArray(arr, size);

            std::cout << " Maximal element: " << MaxElement(arr, size) << '\n';

            delete[] arr;

        }
        else
        {
            std::cout << " Error: very little size ";
        }
    }
    catch (std::bad_alloc& e) { std::cout << " Memory isn't enough \n"; }
    return 0;
}

