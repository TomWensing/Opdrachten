#include <iostream>
#include <string>
using namespace std;

int main(){

    int x = 8.2; // x = 8
    int y = 18 / 5; // y = 3
    
    float e = 3.429; // e = 3.429
    float f = 18 / 5; // f = 3.6

    char a = 'a'; // a = a
    char b = 'e'; // b = e
    char c = b; // c = b

    bool r = true; // r = true
    bool u = (1 & 0); // u = false

    string p = "Klaar?"; // p = Klaar?
    string s = string("Nee, nog") + string(" niet"); // s = Nee, nog niet

    cout << "x is: " << x << "\n";
    cout << "e is: " << e << "\n";
    cout << "a is: " << a << "\n";
    cout << "c is: " << c << "\n";
    cout << "u is: " << u << "\n";
    cout << "s is: " << s << "\n";
}