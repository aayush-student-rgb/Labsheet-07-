#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], sub[100];

    cout << "Enter the main string: ";
    cin.getline(str, 200);

    cout << "Enter the substring: ";
    cin.getline(sub, 100);

    char* ptr = strstr(str, sub);

    if (ptr != nullptr)
        cout << "Substring found at index = " << ptr - str;
    else
        cout << "Substring not found";

    return 0;
}