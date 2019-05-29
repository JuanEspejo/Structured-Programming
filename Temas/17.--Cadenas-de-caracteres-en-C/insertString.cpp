#include <iostream>
#include <cstring>
using namespace std;

void insertString(char *dest, const char *src, size_t initial, size_t final);
size_t indexString(char *dest, const char *src);
bool isInString(char *dest, size_t index, const char *src);

int main() {
    //printf("%.2f", valor)
    char one[60] =
       "I walked down the canyon with the moving mountain bikers.";
    char two[60] =
       "The bikers passed by me too close for comfort.";
    char three[60] =
       "I went hiking instead.-";
    char str[180] = "";

    insertString(str, one, 0, 1);
    strcat(str, "moved");
    insertString(str, one, indexString(one," d"), indexString(one," mov"));
    insertString(str, one, indexString(one,"mou"), strlen(one) - 1);
    strcat(str, " ");

    insertString(str, two, 0, 3);
    strcat(str,"mountain ");
    insertString(str, two, 4, strlen(two) - 1);
    strcat(str, " ");

    strcat(str, "So ");
    insertString(str, three, 0, strlen(three) - 2);
    cout << str << endl;
}

void insertString(char *dest, const char *src, size_t initial, size_t final) {
    size_t k = strlen(dest);
    for (size_t j = initial; j <= final ; ++j) {
        dest[k++] = src[j];
    }
    dest[k] = '\0';
}

size_t indexString(char *dest, const char *src) {
    for (size_t j = 0; j < strlen(dest) - strlen(src) ; ++j) {
        if (isInString(dest, j, src)) return j;
    }
}

bool isInString(char *dest, size_t index, const char *src) {
    for (size_t j = 0; j < strlen(src); ++j) {
        if(dest[index + j] != src[j]) return false;
    }
    return true;
}
