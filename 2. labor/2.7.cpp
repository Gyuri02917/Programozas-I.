#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    float szam;
    cout << "Adjon meg egy számot!" << endl;
    cin >> szam;
    if (szam > 0) {
        cout << "A megadott szám pozitív!" << endl;
    } else if (szam < 0) {
        cout << "A megadott szám negatív!" << endl;
    } else {
        cout << "A megadott szám nulla!" << endl;
    }
    
    return 0;
}