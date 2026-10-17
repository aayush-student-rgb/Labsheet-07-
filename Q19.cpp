#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[300] = "";
    char str1[100], str2[100], str3[100];

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 100);

    cout << "Enter third string: ";
    cin.getline(str3, 100);

    strcat(sentence, str1);
    strcat(sentence, " ");
    strcat(sentence, str2);
    strcat(sentence, " ");
    strcat(sentence, str3);

    cout << "Combined sentence = " << sentence;

    return 0;
}