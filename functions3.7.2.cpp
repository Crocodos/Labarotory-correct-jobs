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

void IndexSearch(double* arr, int& FirstPosIndex, int& SecondPosIndex, int size) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] > 0) {
            if (FirstPosIndex == -1) {
                FirstPosIndex = i;
            }
            else if (SecondPosIndex == -1) {
                SecondPosIndex = i;
                break;
            }
        }
    }
}

void Sum(double* arr, int FirstPosIndex, int SecondPosIndex, int sum) 
{
    if (FirstPosIndex != -1 && SecondPosIndex != -1)
    {
        for (int i = FirstPosIndex + 1; i < SecondPosIndex; ++i) 
        {
            sum += arr[i];
        }
        std::cout << "Sum of elements between first and second positive elements: " << sum << '\n';
    }
    else {
        std::cout << "Not enough positive elements in array. \n";
    }
}

void CreateArray(double* &arr, int size) 
{
    double* arr = new double[size];
}

void DeleteArray(double*& arr)
{
    delete[] arr;
    std::cout << " Memory was deleted \n";
}