#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char nev[25];
    cout<<"Adja meg a nevét: ";
    cin.getline(nev, 25);
    cout<<"Üdvözöllek "<<nev<<"!"<<endl;

    return 0;
}