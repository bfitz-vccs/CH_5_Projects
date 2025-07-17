#include <iostream>
#include <random>

int main(){

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<>dist(1, 1000);

    int num = dist(gen);
    int user_guess;
    int guesses = 0;
    std::cout << "Guess the number between 1 and 1,000: ";
    std::cin >> user_guess;
    guesses++;
    while (user_guess != num){
        if (user_guess > num){
            std::cout << "Too high, guess again!" << std::endl;
            std::cout << "Guess the number between 1 and 1,000: ";
            std::cin >> user_guess;
            guesses++;
        }
        else{
            std::cout << "Too low, guess again!" << std::endl;
            std::cout << "Guess the number between 1 and 1,000: ";
            std::cin >> user_guess;
            guesses++;
        }
        }
    std::cout << "Congratulations! You guessed the right number! It took you " << guesses << " guesses to figure it out." << std::endl;
    

    return 0;
}