#include <iostream>
#include <ctime>
#include <cstdlib>

void computerChoice(char computer);

int main() {

    char computer;

    std::cout<<"Welcome to the Rock Paper Scissors Game";
    computerChoice(computer);

}

void computerChoice(char computer) {

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
}