#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct fordulo
{
    int lott, kapott;
    string nev1, nev2;
};

int main()
{
    int i, j, db = 0, nyert = 0;
    fordulo A[8];
    ifstream be("merkozes.txt"); // Adatbevitel
    if (be.fail())
    {
        cout << "Hiba a fájl megnyitasa soran." << endl;
        system("pause");
        exit(1);
    }
    for (i = 0; i < 8 && !be.eof(); i++) // while( ) is jó
    {
        be >> A[i].lott;
        be >> A[i].kapott;
        be >> A[i].nev1;
        be >> A[i].nev2;
        db++;
        cout << A[i].lott << " " << A[i].kapott << " " << A[i].nev1 << " " << A[i].nev2 << endl;
    }
    cout << "\nA forduloban " << db << " merkozest jatszottak." << endl;
    be.close();
    cout << endl;

    // Mennyi csapat nyert otthon.
    for (i = 0; i < db; i++)
    if (A[i].lott > A[i].kapott) nyert++;
    cout << nyert << " csapat gyozott otthon." << endl;

    // Melyik csapat rúgta a legtöbb gólt.
    string maxcsapat;
    int max = 0;
    for (i = 0; i < db; i++)
    {
        if (A[i].lott > max)
        { 
            max = A[i].lott;
            maxcsapat = A[i].nev1;
        }
        if (A[i].kapott > max)
        { 
            max = A[i].kapott;
            maxcsapat = A[i].nev2;
        }
    }
    cout << "\nA legtobb golt a " << maxcsapat << " lotte." << endl;

    // Volt-e döntetlen.
    i = 0;
    while (i < db && A[i].lott != A[i].kapott)
    i++;
    if (i < db) cout << "\nVolt dontetlen merkozes" << endl;
    else cout<< "\nNem volt dontetlen merkozes." << endl;
    
    // Mennyi gólt lőtt az ute
    i = 0;
    while (i < db && !(A[i].nev1 == "ute" || A[i].nev2 == "ute"))
    i++;
    if (A[i].nev1 == "ute")
    cout <<endl<< A[i].lott << " golt lott az UTE." <<endl<< endl;
    else cout <<endl<<A[i].kapott<<" golt lott az UTE" <<endl<<endl;
    system("PAUSE");
    return 0;
}