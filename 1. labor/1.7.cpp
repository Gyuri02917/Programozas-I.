#include <iostream>

using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int a = 10, b = 12;
    cout << "A változók értékei: " << a << " és " << b << endl;
    cout << "A változók összege: " << a + b << endl;
    cout << "A változók különbsége: " << a - b << endl;
    cout << "A változók szorzata: " << a * b << endl;
    cout << "A változók hányadosa: " << a / b << endl;
    cout << "A változók maradéka: " << a % b << endl;

    return 0;
}