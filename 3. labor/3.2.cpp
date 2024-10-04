#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    cout<<"Adja meg a hallató programozás jegyét: ";
    int jegy;
    cin>>jegy;
    if(jegy==1) cout<<"Elégtelen";
    else if(jegy==2) cout<<"Elégséges";
    else if(jegy==3) cout<<"Közepes";
    else if(jegy==4) cout<<"Jó";
    else if(jegy==5) cout<<"Jeles";

    return 0;
}