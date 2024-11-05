#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string sor;
    ifstream myfile("proba01.txt");
    if (myfile.is_open())
    {
        while (myfile.good()) //tesztelés
        {
            getline(myfile, sor); //kiolvasás a file-ból
            cout << sor << endl; //kiírás a képernyőre
        }
        myfile.close();
    }
    else cout << "A file megnyitasa sikertelen volt.";
    return 0;
}