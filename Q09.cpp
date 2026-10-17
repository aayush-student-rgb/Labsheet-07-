#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char names[5][50], temp[50];

    cout << "Enter 5 names:\n";

    for (int i = 0; i < 5; i++)
        cin >> names[i];

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4 - i; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "Names in alphabetical order:\n";

    for (int i = 0; i < 5; i++)
        cout << names[i] << endl;

    return 0;
}