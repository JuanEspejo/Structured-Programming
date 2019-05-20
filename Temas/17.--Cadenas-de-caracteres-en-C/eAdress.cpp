#include <iostream>
#include <cstring>
using namespace std;

bool isLowercaseLetter(char letter);
bool isUppercaseLetter(char letter);
bool isNumeric(char letter);
bool isAlphaNumeric(char letter);
bool isValidChar(char letter);

int main() {

    char eAddress[40] = "Jespejod@uni.edu";
    char eAdressValidated[40];
    int length = strlen(eAddress);
    int quantityAt = 0;
    int quantityDot = 0;
    int n1 = 0, n2 = 0, n3 = 0;
    int k = 0;
    cout << "length: " << length << endl;
    for (int j = 0; j < length; ++j) {
        if (!isValidChar(eAddress[j])) {
            cout << " It must contain alphanumeric or @ or . only!" << endl;
            return 1;
        }
        if (eAddress[j] == '@') quantityAt++;
        if (eAddress[j] == '.') quantityDot++;
    }
    if (quantityAt != 1 || quantityDot != 1) {
        cout << " It must contain one @ and one . only!" << endl;
        return 1;
    }
}

bool isLowercaseLetter(char letter) {
    if (97 <= letter && letter <= 122) return true;
    return false;
}

bool isUppercaseLetter(char letter) {
    if (65 <= letter && letter <= 90) return true;
    return false;
}

bool isNumeric(char letter) {
    if (48 <= letter && letter <= 57) return true;
    return false;
}

bool isAlphaNumeric(char letter) {
    if (isUppercaseLetter(letter) ||
        isLowercaseLetter(letter) ||
        isNumeric(letter))
        return true;
    return false;
}

bool isValidChar(char letter) {
    if (isAlphaNumeric(letter) ||
        letter == '@' ||
        letter == '.')
        return true;
    return false;
}
