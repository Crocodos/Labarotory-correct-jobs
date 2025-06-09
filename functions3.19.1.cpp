#include <iostream>

void EnterSize(int& size)
{
    std::cout << "Enter size of your array: ";
    std::cin >> size;
}

bool CheckSize(int size)
{
    return size > 2;
};

void EnterArray(double* arr, int size)
{
    std::cout << "Enter elements of array: \n";
    for (int i = 0; i < size; ++i) {
        std::cin >> arr[i];
    }
}

int CountDifferentElements(double* arr, int size)
{
    int32_t counter{ size };
    for (int i = 0; i < size; ++i) 
    {
        for (int j = 1; j < size - i; ++j) 
        {
            if (arr[i] == arr[i + j])
            {
                counter--;
            }
        }
    }
    return counter;
}