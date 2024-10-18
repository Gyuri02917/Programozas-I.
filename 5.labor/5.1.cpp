#include <iostream>
#include <string>
using namespace std;

int main()
{
    char b;
    string nev1, nev2;
    
    cout << "Adja meg a nevet ekezetek nelkul: ";
    getline(cin, nev1);
    
    nev2 = nev1; // a nev1 átmásolása nev2-be
    
    cout << "Az On nevenek a masolata: " << nev2 << endl;
    cout << "A neve hossza a szokozzel egyutt: " <<
    nev1.length() << endl;
    
    cout << "Szeretne torolni a masolatot? igen= i, nem = n: ";
    cin >> b;
    
    if(b=='i') nev2.clear();
    if (nev1==nev2) cout<<"A ket karakterlanc egyforma."<<endl;
    else cout << "A ket karakterlanc mar nem egyforma."<< endl;
    return 0;
}