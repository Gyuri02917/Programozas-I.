#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int szam;
    cout << "Adjon meg egy egész számot!" << endl;
    cin >> szam;
    if (szam % 2 == 0) {
        cout << "A megadott szám páros!" << endl;
    } else {
        cout << "A megadott szám páratlan!" << endl;
    }
    
    return 0;
}