#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    cout<<"Adja meg a hallató programozás jegyét: ";
    int jegy;
    cin>>jegy;
    switch(jegy) {
        case 1:
            cout << "Elégtelen";
            break;
        case 2:
            cout << "Elégséges";
            break;
        case 3:
            cout << "Közepes";
            break;
        case 4:
            cout << "Jó";
            break;
        case 5:
            cout << "Jeles";
            break;
        default:
            cout << "Érvénytelen jegy";
            break;
    }

    return 0;
}