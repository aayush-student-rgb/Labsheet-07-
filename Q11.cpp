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
    char str[100], rev[100];

    cout << "Enter a string: ";
    cin.getline(str, 100);

    strcpy(rev, str);
    strrev(rev);

    if (strcmp(str, rev) == 0)
        cout << "String is a palindrome";
    else
        cout << "String is not a palindrome";

    return 0;
}