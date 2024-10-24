#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

struct dolgozo
{
    string nev;
    int fiz;
};

int main()
{
    dolgozo csop[5];
    int i, ossz = 0;

    for (i = 0; i < 5; i++) // dolgozói adatok bekérése
    {
        cout << "Adja meg a(z) " << i + 1 << ". dolgozo nevet: ";
        getline(cin, csop[i].nev);
        cout << "Adja meg a fizeteset: ";
        cin >> csop[i].fiz;
        cin.ignore(); 
    }

    system("cls");
    cout.setf(ios::left); // balra zárt kiírás
    for (i = 0; i < 5; i++) // kiiratas tablazatosan + osszfizetes szamitas
    {
        cout << setw(25) << csop[i].nev << "\t" << csop[i].fiz << endl;
        ossz = ossz + csop[i].fiz;
    }
    cout << "\nA csoport osszfizetese: " << ossz << endl;
    return 0;
}