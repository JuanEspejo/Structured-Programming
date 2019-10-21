#include <iostream>
using namespace std;

void invierte();

int main()
{
    cout << "ingresar: ";
    invierte(); // 'a''b''\n'
    // { ch = 'a' : ch = 'b': ch = '\n'

    // buffer: '\n'
    cout << endl;
}

void invierte()
{
    char ch;
    ch = getchar();
    if(ch != '\n'){
        invierte();
    }
    cout << ch;
}
