#include <iostream>
using namespace std;

int main()
{
    int kocka[8], TAR[6] = { 0 }, i; //a TAR[] -ban számoljuk, az egyes dobásokból mennyi
    for (i = 0; i < 8; i++)//ellenőrzött dobás bekérés
    {
        do
            {
            cout << "Adja meg az " << i + 1 << ". dobas eredmenyet: ";
            cin >> kocka[i];
            } while (kocka[i] < 1 || kocka[i]>6);
        }

    int dbparos = 0;
    for (i = 0; i < 8; i++)// eredmények megszámlálása, páros dobások száma
    {
        switch (kocka[i])
        {
            case 1:TAR[0]++;break;
            case 2:TAR[1]++;break;
            case 3:TAR[2]++;break;
            case 4:TAR[3]++;break;
            case 5:TAR[4]++;break;
            case 6:TAR[5]++;break;
        }
        if (kocka[i] % 2 == 0) dbparos++;
    }
    cout << endl;

    for (i = 0; i < 6; i++) // eredmények kiíratása
    {
        cout << "\nA(z) " << i + 1 << "-es dobasok szama:\t" << TAR[i];
    }
    cout << "\n\nA paros dobasok szama:\t" << dbparos << endl;
    return 0;
}