#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];

    cout << "Enter a string: ";
    cin.getline(str1, 100);

    strcpy(str2, str1);

    cout << "Original string = " << str1 << endl;
    cout << "Copied string = " << str2;

    return 0;
}