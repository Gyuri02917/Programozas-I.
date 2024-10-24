#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct hallgato
{
    string nev;
    int mat;
};

int main()
{
    hallgato tankor[3];
    int i, ossz = 0;
    char c;
    
    for (i = 0; i < 3; i++) // hallgatói adatok bekérése
    {
        cout << "Adja meg az " << i + 1 << ". hallgato nevet : ";
        getline(cin, tankor[i].nev);
        cout << "adja meg a matematika jegyet: ";
        cin >> tankor[i].mat;
        cin.ignore();
    }
    
    system("cls");
    cout.setf(ios::left); // balra zárt táblázatos kiírás
    
    for (i = 0; i < 3; i++)
    {
        cout<<setw(25)<<tankor[i].nev<<"\t"<<tankor[i].mat<<endl;
        ossz = ossz + tankor[i].mat;
    }
    cout << "\nA tankor atlaga :" << (float)ossz / i;
    system("pause");
    return 0;
}