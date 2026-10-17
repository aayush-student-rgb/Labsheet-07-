#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100], copy[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    strcpy(copy, str1);

    if (strcmp(copy, str2) == 0)
        cout << "Strings are equal";
    else
        cout << "Strings are not equal";

    return 0;
}