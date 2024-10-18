#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char nev[25], nev2[25];
    cout << "Adja meg a nevét: ";
    cin.getline(nev, 25);
    strcpy_s(nev2, nev);

    for (int i = 0; nev2[i] != '\0'; i++) {
        nev2[i] = toupper(nev2[i]);
    }
    cout << "Név nagybetűsen: " << nev << endl;

    for (int i = 0; i < strlen(nev2); i++) {
        nev2[i] = tolower(nev2[i]);
    }
    cout << "Név kisbetűsen: " << nev << endl;

    bool egyforma = strcmp(nev2, nev) == 0;
    cout << "Az eredeti és a kisbetűs név " << (egyforma ? "megegyezik" : "nem egyezik meg") << "." << endl;

    return 0;
}