#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int tmb[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < 10; i++)
    {
        cout << "A tömb " << i << ". eleme: " << tmb[i] << endl;
    }

    return 0;
}