#include <iostream>
#include <cstring>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char vers[2][60], bet;
    int i, j, szokoz = 0;
    for (i = 0; i < 2; i++)
    {
        cout<< "Adja meg a vers " << i + 1 << ". sorat: " << endl;
        cin.getline(vers[i], 60);
    }
    cout << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < strlen(vers[i]); j++)
        {
            if (vers[i][j] == ' ')
                szokoz++;
            bet = toupper(vers[i][j]);
            cout << bet;
        }
        cout << endl;
    }
    cout << endl << "A szokozok szama: " << szokoz << endl;
    
    return 0;
}