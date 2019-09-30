#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int m[2][3] = {{1,2,3},{4,5,6}};
    // m es del tipo int (*)[3]
    int *ptr = (int *)m;

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 3; ++j) {
            cout << setw(3) << *(ptr + i*3 + j);
        }
        cout << endl;
    }
}
