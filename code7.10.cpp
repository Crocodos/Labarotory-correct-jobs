#include <iostream>
#include <string>

using namespace std;

string encodeChar(char ch) {
    int code = static_cast<unsigned char>(ch); 
    string codeStr = to_string(code);  

    while (codeStr.length() < 3) {
        codeStr = "0" + codeStr;
    }

    return "%" + codeStr;
}

string transformString(const string& input) {
    string result;

    try {
        for (char ch : input) {
            if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                result += ch;
            }
            else if (ch == ' ') {
                result += '+';
            }
            else {
                result += encodeChar(ch);
            }
        }
    }
    catch (const exception& e) {
        cerr << "Error of working with string: " << e.what() << endl;
        return "";
    }

    return result;
}

int main() {
    string input;

    cout << "Enter line: ";
    getline(cin, input);

    if (input.empty()) {
        cout << "Error: entered empty line." << endl;
        return 1;
    }

    string transformed = transformString(input);

    cout << "Changed line: " << transformed << endl;

    return 0;
}
