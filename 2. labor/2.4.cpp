#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    const int pi = 3.14159;
    int r;
    cout << "Adja meg a kör sugarát!" << endl;
    cin >> r;
    cout << "A kör kerülete: " << 2 * r * pi << endl;
    cout << "A kör területe: " << r * r * pi << endl;
    
    return 0;
}