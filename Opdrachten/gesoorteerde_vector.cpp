#include <iostream>
#include <vector>
using namespace std;

bool isGesorteerd(const std::vector<int>& vec) {
    for (size_t i = 1; i < vec.size(); i++) {
        if (vec[1] < vec [i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> getallen;
    int invoer;

    while (true) {
        std::cout << "Geef een getal: ";
        std::cin >> invoer;

        if (invoer < 0) {
            break;
        }

        getallen.push_back(invoer);
    }

    if (getallen.empty()) {
        std::cout <<"er zijn geen geldige getallen ingevoerd. \n";
        return 0;
    }

    if (isGesorteerd(getallen)) {
        std::cout << "de reeks is gesorteerd. \n";
    } else {
        std::cout << "de reeks is niet gesorteerd \n";
    }

    double som = 0;
    int minimum = getallen[0];

    for (size_t i = 0; i < getallen.size(); i++){
        som += getallen[i];

        if (getallen[i] < minimum) {
            minimum = getallen[i];
        }

    }

    double gemiddelde = som / getallen.size();

    std::cout << "De gemiddelde waarde is: " << gemiddelde << std::endl;
    std::cout << "De minimum waarde is: " << minimum << std::endl;
    std::cout << "De reeks bevat " << getallen.size() << " getallen." << std::endl;

    return 0;
}