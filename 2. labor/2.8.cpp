#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int szam, osszeg = 0;
    cout << "Adjon meg egy egész számot!" << endl;
    cin >> szam;
    for (int i = 1; i <= szam; i++) {
        osszeg += i;
    }
    cout << "Az első " << szam << " pozitív egész szám összege: " << osszeg << endl;

    return 0;
}