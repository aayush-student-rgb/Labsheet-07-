#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200], sub[100];

    cout << "Enter the main string: ";
    cin.getline(str, 200);

    cout << "Enter the string to search: ";
    cin.getline(sub, 100);

    if (strstr(str, sub) != nullptr)
        cout << "String is present";
    else
        cout << "String is not present";

    return 0;
}