#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int a = 15;
    int kerulet, terulet;
    kerulet = 4 * a;
    terulet = a * a;
    cout << "A négyzet kerülete " << kerulet << " cm, területe pedig " << terulet << " cm^2." << endl;

    return 0;
}