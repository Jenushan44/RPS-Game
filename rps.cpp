#include <iostream>
#include <ctime>
#include <cstdlib>

char computerChoice();
char playerChoice();
void winGame(char player, char computer);

int main() {

    char computer;
    char player;

    std::cout<<"Welcome to the Rock Paper Scissors Game";
    computer = computerChoice();
    player = playerChoice();
    winGame(player, computer);

    return 0;

}

char computerChoice() {

    char computer; 

    srand(time(0));

    int num = rand() % 3 + 1;

    switch(num) {
        case 1:
            computer == 'r';
            std::cout<<"Computer has selected rock";
            break;
        case 2:
            computer == 'p';
            std::cout<<"Computer has selected paper";
            break;
        case 3:
            computer == 's';
            std::cout<<"Computer has selected scissors";
            break;
    }

    return 0;
}

char playerChoice() {

    char player;

    std::cout<<"Please enter your move: \n";
    std::cin>>player;

    return 0;
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