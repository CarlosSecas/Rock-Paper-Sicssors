#include <iostream>
#include <string>

int main() {
    // make choices rock, paper, sicssors
    std::string choice1 = "Rock";
    std::string choice2 = "Paper";
    std::string choice3 = "Sicssors";

    // create a variable to hold the 2 users choices
    
    std::string player1, player2;

    std::cout << "Welcome to Rock, Paper, Sicssors!\n";

    do {
        std::cout << "Player 1 please choose your choice.\n";
        std::cin >> player1;

        if (player1 != "Rock" && player1 != "Sicssors" && player1 != "Paper") {
            std::cout << "Invalid input make sure the starting letter is capitlized. "
                          "For example Rock instead of rock \n";
        } else {
            break;
        }

    } while (true);


    do {
        std::cout << "Player 2 please choose your choice.\n";
        std::cin >> player2;

        if (player2 != "Rock" && player2 != "Sicssors" && player2 != "Paper") {
            std::cout << "Invalid input make sure the starting letter is capitlized. "
                          "For example Rock instead of rock \n";
        } else {
            break;
        }

    } while (true);

    
    // Now implment the winning conditions
    
    // tie condition
    if (player1 == player2) {
            std::cout << "It is a tie!\n";
    }
    else if (player1 == "Rock" && player2 == "Sicssors" && player1 == "Paper" && player2 == "Rock"
             && player1 == "Sicssors" && player2 == "Paper") {
                std::cout << "player 1 wins !\n";
    }  
    else  {
        std::cout << "player 2 wins !\n";
    }

    return 0;
}

