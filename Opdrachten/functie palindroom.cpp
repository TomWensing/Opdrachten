#include <iostream>
#include <string>
using namespace std;

// Draait een string in-place om
void reverse(string& str) {
    int n = str.size();
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];         // tijdelijke variabele
        str[i] = str[n - 1 - i];    // verwissel karakters
        str[n - 1 - i] = temp;
    }
}

// Controleert of een woord een palindroom is
bool isPalindroom(const string& word){
    string orginalWord = word;
    reverse(orginalWord);
    for(unsigned int i = 0; i < word.size(); i++){
        if(word[i] != orginalWord[i]){
            return false;
        }
    }
    return true;
}

int main() {
    string woorden[] = {"stekkerdoos", "Halloween", "lepel", "flesje", "bommelding"};
    
    for (string w : woorden) {
        cout << w << " -> ";
        if (isPalindroom(w)) {
            cout << "palindroom" << endl;
        } else {
            cout << "geen palindroom" << endl;
        }
    }
    return 0;
}