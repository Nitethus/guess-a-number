#include <iostream>
#include <ctime>

int main() {

    srand (time(NULL));
    int guess;
    int tries = 0;
    int secreteNum = rand() % 100 + 1;

    std::cout << "******************** Guess number game **************************\n";
    do{
        std::cout << "Searh for number between 1-100!\n";
        std::cout << "Write down a number and try to guess!: ";
        std::cin >> guess;

        if (guess < secreteNum) {
            std::cout << "It's too low!\n";
        }
        else if (guess > secreteNum) {
            std::cout << "It's too high\n";
        }
        else {
            std::cout << "Congratulation!\n";
            std::cout << "You won! The secrete number was " << secreteNum << '\n';
            std::cout << "It took you: " << tries << " tries";
        }
        tries++;
    }while(guess != secreteNum);
    

    return 0;
}