#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream myfile("proba01.txt");
    if (myfile.is_open())
    {
        myfile << "Ez egy sor.\n"; //Ez a file-ba ír
        myfile << "Ez meg egy ujabb.\n"; //Ez is
        myfile.close(); //Fájl lezárása
        cout << "A file megirasa befejezodott!"; //Ez már a képernyőre megy.
    }
    else cout << "A file megnyitasa sikertelen volt.";
    return 0;
}