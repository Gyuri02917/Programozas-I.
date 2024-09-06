#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int atmero = 14, sugar, kerulet, terulet;
    int atvalt = 2.54;
    sugar = atmero / 2 * atvalt;
    kerulet = 2 * sugar * 3.14;
    terulet = sugar * sugar * 3.14;
    cout << "A felni sugarának hossza: " << sugar << " cm" << endl;
    cout << "A felni kerülete: " << kerulet << " cm" << endl;
    cout << "A felni területe: " << terulet << " cm^2" << endl;
    return 0;
}