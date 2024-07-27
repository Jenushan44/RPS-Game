#include <iostream>
#include <ctime>
#include <cstdlib>

char computerChoice();
char playerChoice();
void winGame(char player, char computer);

int main() {

    char computer;
    char player;
    std::string again;

    do {

    std::cout<<"Welcome to the Rock Paper Scissors Game\n";
    player = playerChoice();
    computer = computerChoice();
    winGame(player, computer);

    std::cout<<"Would you like to play again?: ";
    std::cin>>again;

    } while (again == "y" || again == "yes");
    return 0;
}

char computerChoice() {

    char computer; 

    srand(time(0));

    int num = rand() % 3 + 1;

    switch(num) {
        case 1:
            computer = 'r';
            std::cout<<"Computer has selected rock\n";
            break;
        case 2:
            computer = 'p';
            std::cout<<"Computer has selected paper\n";
            break;
        case 3:
            computer = 's';
            std::cout<<"Computer has selected scissors\n";
            break;
    }
    return computer;
}

char playerChoice() {

    char player;

    while(true) {

        std::cout<<"Please enter you move (r/p/s): ";
        std::cin>>player;

        if (player == 'r' || player == 'p' || player =='s') {
            break;
        } else {
            std::cout<<"Please enter a valid move";
        }
    }

    return player;
}

void winGame(char player, char computer) {

    switch (player) {
        case 'r':
            if (computer == 'r') {
                std::cout<<"It is a tie";
            } else if (computer == 'p') {
                std::cout<<"You lose";
            } else if (computer == 's') {
                std::cout<<"You win";
            }
            break;
        case 'p':
            if (computer == 'p') {
                std::cout<<"It is a tie";
            } else if (computer == 's') {
                std::cout<<"You lose";
            } else if (computer == 'r') {
                std::cout<<"You win";
            }
            break;
        case 's':
            if (computer == 's') {
                std::cout<<"It is a tie";
            } else if (computer == 'r') {
                std::cout<<"You lose";
            } else if (computer == 'p') {
                std::cout<<"You win";
            }
            break;
    }
}