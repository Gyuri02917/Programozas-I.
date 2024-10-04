#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    cout<<"Adja meg a hallató programozás jegyét: ";
    int jegy;
    cin>>jegy;
    if(jegy==1) cout<<"Elégtelen";
    if(jegy==2) cout<<"Elégséges";
    if(jegy==3) cout<<"Közepes";
    if(jegy==4) cout<<"Jó";
    if(jegy==5) cout<<"Jeles";

    return 0;
}