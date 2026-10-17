#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str[200];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(str, 200);

    for (int i = 0; i < strlen(str); i++) {
        char ch = tolower(static_cast<unsigned char>(str[i]));

        if (ch != 'a' && ch != 'e' && ch != 'i' &&
            ch != 'o' && ch != 'u') {
            str[j++] = str[i];
        }
    }

    str[j] = '\0';

    cout << "String without vowels = " << str;

    return 0;
}