#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[200];
    int words = 0;
    bool inWord = false;

    cout << "Enter a sentence: ";
    cin.getline(str, 200);

    for (int i = 0; i < strlen(str); i++) {
        if (!isspace(static_cast<unsigned char>(str[i]))) {
            if (!inWord) {
                words++;
                inWord = true;
            }
        } else {
            inWord = false;
        }
    }

    cout << "Number of words = " << words;

    return 0;
}