#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char nev[25];
    cout<<"Adja meg a nevét: ";
    cin>>nev;
    cout<<"Üdvözöllek "<<nev<<"!"<<endl;

    return 0;
}