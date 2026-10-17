#include <iostream>
#include <cstring>
using namespace std;

char* strrev(char str[]) {
    int i = 0;
    int j = strlen(str) - 1;

    while (i < j) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    return str;
}

int main() {
    char str[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    strrev(str);

    cout << "Reversed string = " << str;

    return 0;
}