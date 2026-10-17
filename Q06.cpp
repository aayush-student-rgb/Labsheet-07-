#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[100], last[100], fullName[200];

    cout << "Enter first name: ";
    cin.getline(first, 100);

    cout << "Enter last name: ";
    cin.getline(last, 100);

    strcpy(fullName, first);
    strcat(fullName, " ");
    strcat(fullName, last);

    cout << "Full name = " << fullName;

    return 0;
}