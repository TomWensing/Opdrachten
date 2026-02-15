#include <iostream>
using namespace std;

int main(){
    int number = 65;
    while( number < 90){
        if(number < 70){
            number = 70;
        }else if( number < 80){
            number++;
        }
        number += 3;
    }
}

// Ik denk dat de volgorde is: 65, 70, 73, 76, 79, 82, 85, 88