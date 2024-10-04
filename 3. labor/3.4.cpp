#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    cout<<"Adjon meg egy számot: ";
    int n, osszeg = 0;
    cin>>n;
    
    while (n>0)
    {
        osszeg += n;
        n--;
    }

    cout<<"Az összeg: "<<osszeg<<endl;

    return 0;
}