#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "hun");
    char betu;
    cout<<"Adjon meg egy betűt: ";
    cin>>betu;
    cout<<"A megadott betű: "<<tolower(betu)<<", nagybetűs alakja: "<<toupper(betu)<<endl;

    return 0;
}