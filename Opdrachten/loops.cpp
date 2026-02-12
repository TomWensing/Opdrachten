// Tom Wensing, 1849194
#include <iostream>
using namespace std;

int main(){
    int x;
    std::cout << "Geef een getal: ";
    std::cin >> x;
    for (int i = 1; i < x + 1; i++){
        std::cout << "\n";
        for (int j = 1; j < i + 1; j++){
            std::cout << "*";
        }
    }

    for (int i = x; i > 0; i--){
        std::cout << "\n";
        for (int j = 1; j < i; j++){
            std::cout << "*";
        }
    }
}