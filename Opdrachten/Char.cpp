#include <string>
#include <iostream>
using namespace std;

//Tom Wensing, 1849194
int main () {
    //char x;
    //cout << "Voer 1 losse hoofdletter in: ";
    //cin >> x;
    //cout << "x + 32 = " << int(x + 32) << "\n";
    //cout << "x + 32 = " << char(x + 32) << "\n";

    char p;
    cout << "Geef een string om te vertalen: ";
    cin >> p;
    cout << p;
    cout << "1337-speak :\n";
    if (p > 96) {
        p = p - 32;
    }
    cout << p;



}