//25 perc
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
using namespace std;

struct autom
{
    int kmKezdo, kmZaro, ora, perc;
    string indulo, erkezo;
    float atlagFogy, uzemanyag, koltseg;
};

int main()
{
    setlocale(LC_ALL, "hun");
    autom utazas[10];
    float uar = 637.90;
    ifstream be("utazas.txt");
    if(be.fail())
    {
        cerr<<"Hiba a fájl megnyitásakor!"<<endl;
        return -1;
    }
    int utak = 0;
    while(be>>utazas[utak].kmKezdo>>utazas[utak].kmZaro>>utazas[utak].indulo>>utazas[utak].erkezo>>utazas[utak].ora>>utazas[utak].perc>>utazas[utak].atlagFogy)
    {
        utazas[utak].uzemanyag = (float)(utazas[utak].kmZaro - utazas[utak].kmKezdo)/100*utazas[utak].atlagFogy;
        utazas[utak].koltseg = utazas[utak].uzemanyag*uar;
        cout<<"Az utazás költsége: "<<utazas[utak].koltseg<<endl<<"Kiszámítása: "<<utazas[utak].uzemanyag*uar<<endl;
        utak++;
    }
    be.close();
    cout<<utak <<" utazás történ a rögzített adatok alapján."<<endl;

    cout.setf(ios::left);
    cout<<setw(20)<<"Indulás"<<setw(20)<<"Érkezés"<<setw(6)<<"Út km"<<setw(5)<<"Üa"<<setw(10)<<"Költség"<<setw(12)<<"Utazás ideje"<<endl;
    for(int i=0;i<utak;i++)
    {
        cout<<setw(20)<<utazas[i].indulo<<setw(20)<<utazas[i].erkezo<<setw(6)<<utazas[i].kmZaro - utazas[i].kmKezdo<<setw(5)<<utazas[i].uzemanyag<<setw(10)<<utazas[i].koltseg<<setw(1)<<utazas[i].ora<<":"<<utazas[i].perc<<endl;
    }

    int szumUa = 0;
    for(int i = 0;i<utak;i++)
    {
        szumUa += utazas[i].uzemanyag;
    }

    cout<<"Összesen "<<szumUa<<" liter üzemanyag kerlült felhasználásra, átlagosan ez "<<(float)szumUa/utak<<" liter/utat jelent."<<endl;

    int leghosszabbIx = 0;

    for(int i=1;i<utak;i++)
    {
        if(utazas[i].kmZaro - utazas[i].kmKezdo > utazas[leghosszabbIx].kmZaro - utazas[leghosszabbIx].kmKezdo)
        {
            leghosszabbIx = i;
        }
    }

    cout<<"A leghosszabb utazás adatai:"<<endl<<utazas[leghosszabbIx].kmKezdo<<"-"<<utazas[leghosszabbIx].kmZaro<<" km, "<<utazas[leghosszabbIx].indulo<<"-"<<utazas[leghosszabbIx].erkezo<<", "<<utazas[leghosszabbIx].ora<<":"<<utazas[leghosszabbIx].perc<<", "<<utazas[leghosszabbIx].uzemanyag<<" liter, "<<utazas[leghosszabbIx].koltseg<<" Ft."<<endl;

    int legkisebbKm=utazas[0].kmKezdo, legnagyobbKm=utazas[0].kmZaro;
    for(int i=1;i<utak;i++)
    {
        if(utazas[i].kmKezdo<legkisebbKm)
        {
            legkisebbKm = utazas[i].kmKezdo;
        }
        if(utazas[i].kmZaro>legnagyobbKm)
        {
            legnagyobbKm = utazas[i].kmZaro;
        }
    }

    cout<<"Az autó összesen "<<legnagyobbKm - legkisebbKm<<" km-t tett meg, "<<legkisebbKm<<"-"<<legnagyobbKm<<" kilóméter tartományban."<<endl;

    ofstream ki("utazas2.txt");
    if(ki.fail())
    {
        cerr<<"Hiba a fájl megnyitásakor!"<<endl;
        return -2;
    }
    cout<<"Az utazások adatai: "<<endl;
    for(int i=0;i<utak;i++)
    {
        cout<<utazas[i].kmKezdo<<"-"<<utazas[i].kmZaro<<" km, "<<utazas[i].indulo<<"-"<<utazas[i].erkezo<<", "<<utazas[i].ora<<":"<<utazas[i].perc<<", "<<utazas[i].uzemanyag<<" liter, "<<utazas[i].atlagFogy<<" l/100km, "<<utazas[i].koltseg<<" Ft."<<endl;
        if(utazas[i].kmZaro - utazas[i].kmKezdo > 10)
        {
            ki<<utazas[i].kmKezdo<<" "<<utazas[i].kmZaro<<" "<<utazas[i].indulo<<" "<<utazas[i].erkezo<<" "<<utazas[i].ora<<" "<<utazas[i].perc<<" "<<utazas[i].uzemanyag<<" "<<utazas[i].atlagFogy<<" "<<utazas[i].koltseg<<" "<<endl;
        }
    }
    ki.close();

    return 0;
}