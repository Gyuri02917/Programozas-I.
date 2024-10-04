#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int pont;
    
    do
    {
        cout << "Adjon meg egy pontszámot 0-100 között: ";
        cin >> pont;
    } while (pont < 0 || pont > 100);
    
    if(pont<50)
        cout<<"Megbukott";
    else
        cout<<"Aláírva!";

    return 0;
}