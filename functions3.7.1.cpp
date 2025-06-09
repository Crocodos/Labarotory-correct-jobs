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

void EnterArray(double* array, int size)
{
    int choice;
    std::cout << "Choose the way of filling array:\n1 - keybord entrance\n2 - filling with random numbers\n";
    std::cin >> choice;

    if (choice == 1) {
        std::cout << "Enter " << size << " of vechestvennich numbers:\n";
        for (int i = 0; i < size; i++) {
            std::cin >> array[i];
        }
    }
    else if (choice == 2) {
        double min_val, max_val;
        std::cout << "Enter borders (min and max): ";
        std::cin >> min_val >> max_val;

        if (min_val > max_val) {
            std::swap(min_val, max_val);
        }

        for (int i = 0; i < size; i++) {
            array[i] = min_val + (max_val - min_val) * (double(rand()) / RAND_MAX);
        }
    }
    else {
        std::cout << "Error: unknown way of filling array.\n";
    }
}

int MaxElement(double* arr, int size) 
{
    double MaxAbsValue = fabs(arr[0]);
    for (int i = 1; i < size; ++i) {
        double absValue = fabs(arr[i]);
        if (absValue > MaxAbsValue) {
            MaxAbsValue = absValue;
        }
    }
    return MaxAbsValue;
}
//Hat