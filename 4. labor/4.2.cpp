#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char betu;
    bool betu, szam;
    cout<<"Adjon meg egy karaktert: ";
    cin>>betu;
    betu = isalpha(betu);
    szam = isdigit(betu);
    if(betu)
        cout<<"A megadott karakter egy betű."<<endl;
    else if(szam)
        cout<<"A megadott karakter egy szám."<<endl;
    else
        cout<<"A megadott karakter egyéb karakter."<<endl;

    return 0;
}