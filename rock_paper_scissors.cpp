#include <iostream>
#include <stdlib.h>

int main(){
    srand (time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";


};