#include<iostream>
#include<iomanip>
#include<string>
#include<ctime>
#include<fstream>
using namespace std;

struct indulo
{
    string nev;
    float eddigi;
    int rajtszam;
    float ido;
};

int main()
{
    indulo sik[19];
    int i, jobb = 0, rosszabb=0, letszam=0;
    float elmaradt = 0, ossz = 0;
    srand((unsigned)time(NULL));

    ifstream verseny("indulok.txt");
    for (i = 0; i < 19 && !verseny.eof(); i++)// adatok feltöltése
    {
        verseny>> sik[i].nev;
        verseny >> sik[i].eddigi;
        sik[i].rajtszam = rand() % 100 + 100;
        do
        {
            cout << "\nAdja meg az " <<sik[i].nev<< " futo eredmenyet: ";
            cin >> sik[i].ido;
            cin.ignore();
            if (sik[i].ido < 10 || sik[i].ido>20)
            cout << "Hibas adat, az idő 10-20mp kozott lehet!" << endl;
        } while (sik[i].ido < 10 || sik[i].ido>20);
        letszam++;
    }
    verseny.close();
    system("cls");

    cout <<"\nOsszesen "<<letszam<< " futo indult a versenyen."<<endl;
    cout.setf(ios::right);
    for (i = 0; i < letszam; i++)
    {
        cout << setw(20) << sik[i].nev << "\t"<<sik[i].rajtszam << "\t\t" <<
        sik[i].eddigi << " mp\t\t" << sik[i].ido << " mp" << endl;
        ossz += sik[i].ido;
    }
    cout << "\nA futok osszesen " << ossz << " masodpercet futottak" << endl;
    system("cls");

    cout <<"\nOsszesen "<<letszam<< " futo indult a versenyen."<<endl;
    cout.setf(ios::right);
    for (i = 0; i < letszam; i++)
    {
        cout << setw(20) << sik[i].nev << "\t"<<sik[i].rajtszam << "\t\t" <<
        sik[i].eddigi << " mp\t\t" << sik[i].ido << " mp" << endl;
        ossz += sik[i].ido;
    }
    cout << "\nA futok osszesen " << ossz << " masodpercet futottak" << endl;
    ofstream kesz("eredmeny.txt");
    if (kesz.is_open())
    {
        for (i = 0; i < letszam; i++)
        {
            kesz << sik[i].nev << "\t";
            kesz << sik[i].eddigi << "\t";
            kesz << sik[i].rajtszam << "\t";
            kesz << sik[i].ido << endl;
        }
        kesz.close();
        cout << "\nA lista sikeresen elkeszult." << endl;
    }
    else cout << "\nA lista letrehozasa sikertelen." << endl;
    return 0;
}