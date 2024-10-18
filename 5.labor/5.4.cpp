#include<iostream>
#include<string>
using namespace std;

struct tanulo
{
    string nev;
    int jegy;
    int szul;
};

int main()
{
    tanulo hallg[15];
    int letszam, i, atlag = 0;
    
    do // letszám bekérése ellenőrzötten
    {
        cout << "adja meg a csoport letszamot: ";
        cin >> letszam;
        cin.ignore();
    } while (letszam < 1 || letszam>15);
    // folytatás

    for (i = 0; i < letszam; i++)// hallgatói adatok ellenőrzötten
    {
        cout << "adja meg a(z) " << i + 1 << ". tanulo nevet: ";
        getline(cin, hallg[i].nev);
        cout << "adja meg a szuletesi evet: ";
        cin >> hallg[i].szul;
        do
            {
                cout << "adja meg a jegyet: ";
                cin >> hallg[i].jegy;
                cin.ignore();
            } while (hallg[i].jegy < 1 || hallg[i].jegy > 5);
    }
    system("cls"); //képernyő törlés

    for (i = 0; i < letszam; i++)
    {
        atlag += hallg[i].jegy;
    }
    cout << "\nA csoport atlaga: " << (float)(atlag / letszam) << endl;
    return 0;
}