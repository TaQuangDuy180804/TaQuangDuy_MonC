#include <iostream>
#include <cstring>
using namespace std;

void upper(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

void lower(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isalpha(str[i])) {
            str[i] = tolower(str[i]);
        }
    }
}

void reverse(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (isupper(str[i])) {
            str[i] = tolower(str[i]);
        } else if (islower(str[i])) {
            str[i] = toupper(str[i]);
        }
    }
}

int main() {
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);

    reverse(input);
    cout << "Reversed: " << input << endl;

    lower(input);
    cout << "Lowercase: " << input << endl;

    upper(input);
    cout << "Uppercase: " << input << endl;

    return 0;
}