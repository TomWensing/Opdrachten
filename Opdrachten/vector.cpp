// Tom Wensing, 1849194
#include <vector>
using namespace std;

// Geeft een waarde van elk getal terug in de vector. 
// Voordeel: voorbeeld 1 geeft direct een kopie van de vector terug. Hierdoor kan je originele vector niet aangepast worden. 
vector<int> positive1(vector<int> numbers){
    for(unsigned int i=0; i<numbers.size(); i++){
        if(numbers[i] < 0){
            numbers[i] *= -1;
        }
    }
    return numbers;
}
// Deze vector heeft geen return-waarde. "&" is een referentie naar de originele vector, niet een kopie. Hierdoor geeft de functie nog steeds een resultaat terug. 
// Voordeel: deze functie maakt geen kopie, maar de originele vector terug. Hiermee kan je direct de vector aanpassen zonder eerst een kopie nodig te hebben. 
void positive2(vector<int> & numbers){
    for(unsigned int i=0; i<numbers.size(); i++){
        if(numbers[i] < 0){
            numbers[i] *= -1;
        }
    }
}

// Deze functie behoud de originele vector en maakt een kopie aan.
// Voordeel: dit is handig als je de oude vector nog nodig hebt, naast de kopie die je aanmaakt. 
vector<int> positive3(const vector<int> & numbers){
    vector<int> newNumbers = numbers;

    for(unsigned int i=0; i<newNumbers.size(); i++){
        if(newNumbers[i] < 0){
            newNumbers[i] *= -1;
        }
    }
    return newNumbers;
}

// Ik zou functie 3 gebruiken, voor het geval dat ik de originele vector nog nodig zou hebben.
// Ik zou sowieso een kopie aanmaken, zodat als ik fouten maak, dat ik niet de originele vector zou verpesten.
// Daarentegen heb ik wel nog steeds de originele vector om altijd terug naar te gaan. 