#include<iostream>
using namespace std;

struct test
{
    char nev[25];
    int magassag;
    float suly;
};

int main()
{
    test gyerek[3];
    for (int i = 0; i < 3; i++)
    {
        cout << "Adja meg a(z) " << i + 1 << ". gyerek nevét: ";
        cin.getline(gyerek[i].nev, 25);
        cout << "Adja meg a(z) " << i + 1 << ". gyerek magasságát: ";
        cin >> gyerek[i].magassag;
        cout << "Adja meg a(z) " << i + 1 << ". gyerek súlyát: ";
        cin >> gyerek[i].suly;
        cin.ignore();
    }

    for (int i = 0; i < 3; i++)
    {
        cout << i + 1 << ". gyerek adatai:" << endl;
        cout << "Név: " << gyerek[i].nev << endl;
        cout << "Magasság: " << gyerek[i].magassag << " cm" << endl;
        cout << "Súly: " << gyerek[i].suly << " kg" << endl;
    }
    

    return 0;
}