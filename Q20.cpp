#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char str1[100], str2[100];
    int count[256] = {0};

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    int len1 = strlen(str1);
    int len2 = strlen(str2);

    if (len1 != len2) {
        cout << "Strings are not anagrams";
        return 0;
    }

    for (int i = 0; i < len1; i++) {
        unsigned char ch1 =
            static_cast<unsigned char>(tolower(
                static_cast<unsigned char>(str1[i])));

        unsigned char ch2 =
            static_cast<unsigned char>(tolower(
                static_cast<unsigned char>(str2[i])));

        count[ch1]++;
        count[ch2]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) {
            cout << "Strings are not anagrams";
            return 0;
        }
    }

    cout << "Strings are anagrams";

    return 0;
}