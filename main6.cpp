#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <cstring>
#include "Header6.h"

using namespace std;

#define MAX_LEN 100

int main() {
    char input[MAX_LEN] = "";
    char result[MAX_LEN] = "";
    char remaining[MAX_LEN] = "";
    char words[50][MAX_LEN]{};
    int wordCount = 0;

    cout << "Enter line (words are detached by spaces): ";
    cin.getline(input, MAX_LEN);

    if (strlen(input) == 0 || strspn(input, " ") == strlen(input)) {
        cout << "Error: Row is empty or filled only by spaces." << endl;
        return 0;
    }

    char temp[MAX_LEN];
    strcpy(temp, input);

    char* token = strtok(temp, " ");
    while (token && wordCount < 50) {
        strcpy(words[wordCount], token);
        wordCount++;
        token = strtok(nullptr, " ");
    }

    if (wordCount == 0) {
        cout << "Error: line without words. \n";
        return 0;
    }

    int index = 1;
    for (int i = 0; i < wordCount; i++) {
        if (index % 2 == 1 && isNumeric(words[i])) {
            if (strlen(result) + strlen(words[i]) + 1 < MAX_LEN) {
                strcat(result, words[i]);
                strcat(result, " ");
            }
            index++;
        }
        else if (index % 2 == 0 && !isNumeric(words[i])) {
            if (strlen(result) + strlen(words[i]) + 1 < MAX_LEN) {
                strcat(result, words[i]);
                strcat(result, " ");
            }
            index++;
        }
        else {
            if (strlen(remaining) + strlen(words[i]) + 1 < MAX_LEN) {
                strcat(remaining, words[i]);
                strcat(remaining, " ");
            }
        }
    }

    cout << "New line: " << result << '\n';
    if (strlen(remaining) > 0) {
        cout << "Remnant words: " << remaining << '\n';
    }

    return 0;
}