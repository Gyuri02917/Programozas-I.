#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    cout << "Adjon meg egy számot: ";
    int n, i = 2, osztok = 0;
    cin >> n;
    
    while (i <= n / 2)
    {
        if(n % i == 0)
        {
            osztok++;
        }
        i++;
    }
    
    cout << "Osztók száma: " << osztok << endl;

    return 0;
}