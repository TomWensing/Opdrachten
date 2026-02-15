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

    string input;

    cout << "Geef een string om te vertalen: ";
    getline(cin, input);

    cout << "1337-speak :\n";

    for (char c : input) {
        switch (c) {
            case 'e':
            case 'E':
                cout << '3';
                break;
            case 'l':
            case 'L':
                cout << '1';
                break;
            case 't':
            case 'T':
                cout << '7';
                break;
            case 'o':
            case 'O':
                cout << '0';
                break;
            default:
                if (c >= 'a' && c <= 'z') {
                    cout << char(c - 32); 
                } else {
                    cout << c; 
                }
                break;
        }
    }

    cout << endl;
    return 0;
}
