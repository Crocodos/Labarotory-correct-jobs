#include <iostream>

bool isNumeric(const char* word) {
    for (int i = 0; word[i] != '\0'; i++) {
        if (!isdigit(word[i])) {
            return false;
        }
    }
    return true;
}