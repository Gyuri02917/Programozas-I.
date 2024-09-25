#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int a, b;
    cout << "Adja meg a téglalap két oldalát (egész számok)!" << endl;
    cin >> a >> b;
    cout << "A téglalap kerülete: " << 2 * (a + b) << endl;
    cout << "A téglalap területe: " << a * b << endl;

    return 0;
}