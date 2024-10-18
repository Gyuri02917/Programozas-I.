#include<iostream>
#include <string>
using namespace std;
int main()
{
    int x,y;
    string str, potstr;

    cout << "Add meg a kedvenc kozmondasod: " << endl;
    getline(cin, str);
    potstr = str;
    
    cout <<"Ez a mondas szokozokkel "<<str.length()<<" karakterbol all."<<endl;
    cout << str.append(" - kozmondas") << endl;
    potstr += " - ez is"; //hozzáfűzés operátorral
    cout << potstr<<endl;
    cout << str.find("kapni")+1 << ". karaktertol kezdodik a 'kapni' szo." << endl;
    cout << "Hanyadik karakterre vagy kivancsi? " << endl;
    cin >> x;
    cout <<"A kozmondas "<<x<<". karaktere: "<<str.at(x-1)<<endl;
    cout <<"A mondas hány utolsó karakteret szeretned latni? "<<
    endl;
    cin >> y;
    cout<<"A kozmondas utolso "<<y<<" karaktere: "<<
    str.substr(str.length()-y,y)<<endl;
    return 0;
}