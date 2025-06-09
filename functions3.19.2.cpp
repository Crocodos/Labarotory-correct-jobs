#include <iostream>

void EnterArray(double* arr, int size) {
    std::cout << "Enter elements of array \n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

void EnterSize(int& size)
{
    std::cout << "Enter size of array \n";
    std::cin >> size;
}

bool CheckSize(int size)
{
    return size > 2;
};

void IndexSearch(double* arr, int& FirstMinIndex, int& SecondMinIndex, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] < 0) {
            if (FirstMinIndex == -1) {
                FirstMinIndex = i;
            }
            else if (SecondMinIndex == -1) {
                SecondMinIndex = i;
                break;
            }
        }
    }
}

void Sum(double* arr, int FirstMinIndex, int SecondMinIndex, int sum)
{
    if (FirstMinIndex != -1 && SecondMinIndex != -1)
    {
        for (int i = FirstMinIndex + 1; i < SecondMinIndex; ++i) {
            sum += arr[i];
        }
        std::cout << "Sum of elements between first and second minus elements: " << sum << '\n';
    }
    else {
        std::cout << "Not enough minus elements in array. \n";
    }
}