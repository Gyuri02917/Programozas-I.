#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    for (int i = 0; i < 10; i++)
    {
        cout << "Példa Péter" << endl;
    }

    cout << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << "Példa Péter\t";
    }

    return 0;
}