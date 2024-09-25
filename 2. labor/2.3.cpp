#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int r;
    cout << "Adja meg a kör sugarát!" << endl;
    cin >> r;
    cout << "A kör kerülete: " << 2 * r * 3.14159 << endl;
    cout << "A kör területe: " << r * r * 3.14159 << endl;
    
    return 0;
}