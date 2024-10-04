#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    int n;
    cout << "Adjon meg egy számot: ";
    cin >> n;

    cout << "1-től " << n << "-ig a következő számok oszthatóak 5-tel vagy 7-tel: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 || i % 7 == 0)
        {
            cout << i << " ";
        }
    }

    cout << "1-től " << n << "-ig a következő számok oszthatóak 5-tel és 7-tel: " << endl;
    for (int i = 1; i <= n; i++)
    {
        if (i % 5 == 0 && i % 7 == 0)
        {
            cout << i << " ";
        }
    }

    return 0;
}