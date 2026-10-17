#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[100];
    int vowels = 0;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(static_cast<unsigned char>(str[i]));

        if (ch == 'a' || ch == 'e' || ch == 'i' ||
            ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Number of vowels = " << vowels;

    return 0;
}