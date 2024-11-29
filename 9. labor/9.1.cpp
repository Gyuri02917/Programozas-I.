#include <iostream>
#include <string>
#include <ctime>
#include <fstream>
#include <iomanip>
using namespace std;
struct dolgozo
{
    string nev;
    int ev, oraszam, fizetes;
};

int main()
{
    dolgozo majus[20];
    int i, szaz = 0, ossz = 0, eletkor = 0, letszam = 0;
    srand((unsigned)time(NULL));

    ifstream jelentes("majus.txt");
    for (i = 0; i < 20 && !jelentes.eof(); i++) // adatok feltöltése
    {
        if (jelentes.is_open())
            jelentes >> majus[i].nev;
        else
            "A fajl megnyitasa sikertelen.";
        do
        {
            cout << "\nAdja meg " << majus[i].nev << " dolgozo szuletesi evet: ";
            cin >> majus[i].ev;
            cin.ignore();
            if (majus[i].ev < 1957 || majus[i].ev > 2004)
                cout << "Hibas adat, a szuletesi ev 1957-2004 kozott lehet!" << endl;
        } while (majus[i].ev < 1957 || majus[i].ev > 2004);
        majus[i].oraszam = rand() % 160 + 1;
        majus[i].fizetes = majus[i].oraszam * 2800;
        letszam++;
    }
    jelentes.close();

    system("cls");

    cout << "Osszesen " << letszam << " fo dolgozott majusban." << endl;
    cout.setf(ios::left); // 4. - eredmények kiíratása "táblázatosan"
    for (i = 0; i < letszam; i++)
    {
        cout << setw(20) << majus[i].nev << majus[i].ev << "\t\t" << majus[i].oraszam << " ora\t\t" << majus[i].fizetes << " Ft" << endl;
        ossz = ossz + majus[i].oraszam; // 5. - összes óraszám
        if (majus[i].oraszam > 100)
            szaz++;                               // 6. - 100 óránál több
        eletkor = eletkor + (2022 - majus[i].ev); // 7. - átlagéletkor
    }
    cout << "\nMajus havi osszes ledolgozott orak szama: " << ossz << endl;
    cout << szaz << " dolgozo teljesitett 100 oranal tobbet majus honapban." << endl;
    cout << "\nA majusban dolgozok atlag eletkora: " << (float)eletkor / letszam << " ev." << endl;

    // h. feladat - elsőként tárolt dolgozó adatai
    cout << "\nAz utolsokent rogzitett dolgozo adatai: \n\t" << majus[letszam - 1].nev << "\t szuletesi eve: " << majus[letszam - 1].ev << "\t majusi oraszama: " << majus[letszam - 1].oraszam << "\t brutto fizetese: " << majus[letszam - 1].fizetes * 1.38 << " Ft" << endl;
    ofstream kesz("majus_teljes.txt");
    if (kesz.is_open())
    {
        for (i = 0; i < letszam; i++)
        {
            kesz << majus[i].nev << "\t";
            kesz << majus[i].ev << "\t";
            kesz << majus[i].oraszam << "\t";
            kesz << majus[i].fizetes << endl;
        }
        kesz.close();
        cout << "\nA lista sikeresen elkeszult." << endl;
    }
    else
        cout << "\nA lista letrehozasa sikertelen." << endl;
    return 0;
}