#include <iostream>
#include <string>
using namespace std;

struct konyv
{
    string szerzo;
    string cim;
    int ar;
};

int main()
{
    konyv gyerek[3];
    int j=rand() % 3 + 1; //értékadás véletlenszámgenerátorral 1-3 között
    for (int i = 0; i < 3; i++) //adatok bekérése
    {
        cout << "Adja meg a(z) " << i + 1 << ". gyerek konyv szerzojet: ";
        getline(cin, gyerek[i].szerzo);
        cout << "Adja meg a konyv cimet: ";
        getline(cin, gyerek[i].cim);
        cout << "Adja meg a konyv arat: ";
        cin >> gyerek[i].ar;
        cin.ignore();
    }
    system("cls"); //képernyőtörlés
    cout << "A sorsolas eredmenye: " << j << endl;
    cout << "A nyertes konyv szerzoje: " << gyerek[j].szerzo << endl;
    cout << "A nyertes konyv cime: " << gyerek[j].cim << endl;
    cout << "A nyertes konyv ara: " << gyerek[j].ar << endl;
    return 0;
}