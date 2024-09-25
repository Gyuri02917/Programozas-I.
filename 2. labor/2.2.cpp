#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char betu;
    cout << "Adjon meg egy karaktert!" << endl;
    cin >> betu;
    cout << "A karakter ASCII kódja: " << (int)betu << endl;
    cout << "A karakter: " << betu << endl;
    
    return 0;
}