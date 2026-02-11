// Tom Wensing, 1849194
#include <iostream>
#include <string>
using namespace std;

int main(){

    int x = 8.2; // x = 8
    int y = 18 / 5; // y = 3
    int z = 18 / 5.0; // z = 3
    int f = '8' - '0'; // f = 8
    int e = 10 % 3; // e = 1
    
    float t = 18 / 5; // t = 3.6
    float s = 18 / 5.0; // s = 3.6

    char a = 'a'; // a = a
    char b = 'e'; // b = e
    char d = b; // d = e
    char c = 'b' + ('Z'- 'z'); // c = ?

    bool r = true && (false || true); // r = true
    bool u = 8 >= 10; // u = false

    string p = "Utereg"; // p = Utereg
    p.append(" Me Stadsie!"); // p = Utereg Me Stadsie
    string station = string("Heidel") + "berglaan"; // station = Heidelberglaan
    string plaats = station.erase(10, station.size()-10); // plaats = Heid

    cout << "x is: " << x << "\n";
    cout << "y is: " << y << "\n";
    cout << "z is: " << z << "\n";
    cout << "f is: " << f << "\n";
    cout << "e is: " << e << "\n";
    cout << "t is: " << t << "\n";
    cout << "s is: " << s << "\n";
    cout << "a is: " << a << "\n";
    cout << "b is: " << b << "\n";
    cout << "d is: " << d << "\n";
    cout << "c is: " << c << "\n";
    cout << "r is: " << r << "\n";
    cout << "u is: " << u << "\n";
    cout << "p is: " << p << "\n";
    cout << "station is: " << station << "\n";
    cout << "plaats is: " << plaats << "\n";
}