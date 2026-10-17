#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;

    cout << "Enter a string: ";
    cin.getline(str, 100);

    cout << "Enter a character to search: ";
    cin >> ch;

    char* ptr = strchr(str, ch);

    if (ptr != nullptr)
        cout << "Character found at index = " << ptr - str;
    else
        cout << "Character not found";

    return 0;
}