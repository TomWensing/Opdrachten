#include <iostream>
#include <vector>

using namespace std;
//opdracht 2.5
int count(const vector<int> & numbers, const int x){
    int teller = 0;

    for (int i = 0; i < numbers.size(); i++){
        if (numbers[i] == x) {
            teller++;
        }
    }
    return teller;
}


// opdracht 2.10
bool VoldoetAanEisen(const vector<int> & number) {
    int aantal_enen = count(number, 1);
    int aantal_nullen = count(number, 0);

    if (aantal_enen > aantal_nullen && aantal_nullen <= 12) {
        return true;
    } else {
        return false;
    }

}

// Dit is voor opdracht 2.5
// int main(){
//     vector<int> n = {0,0,0,1,1,0,1,0,0,1,1,1,1,0,1,0,0};
//     int number_of_fours = count(n, 4);
//     cout << "Number of fours: " << number_of_fours << "\n";
// }


// Dit is voor opdracht 2.10
int main(){
    vector<int> n = {0,0,0,1,1,0,1,0,0,1,1,1,1,0,1,0,0};
    if (VoldoetAanEisen(n)) {
        cout << "Vector voldoet aan eisen. \n";
    } else {
        cout << "Vector voldoet niet aan eisen. \n";
    }
}