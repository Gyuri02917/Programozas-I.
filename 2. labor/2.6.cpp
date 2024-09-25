#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int szam;
    cout << "Adja meg a személyi számának első karaterét!" << endl;
    cin >> szam;
    if (szam == 1 || szam == 3)
    {
        cout << "A személyi száma alapján Ön férfi!" << endl;
    } else if (szam == 2 || szam == 4)
    {
        cout << "A személyi száma alapján Ön nő!" << endl;
    } else
    {
        cout << "A megadott személyi szám érvénytelen" << endl;
    }
    
    return 0;
}