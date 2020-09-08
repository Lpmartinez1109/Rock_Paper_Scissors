#include <iostream>
#include <stdlib.h>

int main(){
    srand (time(NULL));
    int computer = rand() % 3 + 1;
    int user = 0;

    std::cout << "====================\n";
    std::cout << "rock paper scissors!\n";
    std::cout << "====================\n";

std::cout << "1) ✊\n";
  std::cout << "2) ✋\n";
  std::cout << "3) ✌️\n";

  std::cout << "shoot! ";
  std::cin >> user;

  if (user == 1 && computer == 1){
    std::cout << "You chose Rock! Your Opponent Chose Rock! You have tied! \n";
  } else if (user == 1 && computer == 2){
    std::cout << "You Chose Rock! Your Opponent Chose Paper! You Have Lost! \n";
    }else if(user == 1 && computer == 3){
      std::cout << "You Chose Rock! Your Opponent Choose Scissors! You Have Won! \n";
    }
    else if (user == 2 && computer == 1){
      std::cout << "You Chose Paper! Your Opponent chose Rock! You Have Won! \n";
    }else if (user == 2 && computer == 2){
      std::cout << "You Chose Paper! Your Opponent Chose Paper! You have Tied! \n";
    }else if (user == 2 && computer == 3){
      std::cout << "You Chose Paper! Your Opponent Chose Scissor! You Have Lost! \n";
    }else if (user == 3 && computer == 1) {
      std::cout << "You Chose Scissors! Your Opponent Chose Rock! You Have Lost! \n";
    }else if (user == 3 && computer == 2) {
      std::cout << "You Chose Scissors! Your Opponent Chose Paper! You Have Won! \n";
    }else if (user == 3 && computer == 3){
      std::cout << "You Chose Sciossors! Your Opponent Chose Scissors! You Have Tied! \n";
    }



};