#include <iostream>
#include <fstream>
#include <string>

int main(){
    
    int population;
    int year = 1900;
    std::string file_name;
    std::string town;
    std::cout << "Please enter in the name of the data file: ";
    std::cin >> file_name;
    std::cout << "Please enter in the name of the town: ";
    std::cin >> town;

    std::ifstream inputFile;
    inputFile.open(file_name);

    // Added while loop for user to input proper file name if there is an error.
    while (!inputFile){
        std::cout << "Invalid file option, please enter in the name of the data file: ";
        std::cin >> file_name;
        inputFile.open(file_name);
    }

    std::cout << town << " Population Growth" << std::endl;
    std::cout << "(each * represents 1,000 people)" << std::endl;
    while (inputFile >> population){
        int stars = population / 1000;
        std::cout << year << " ";
        for (int i=0; i<stars; i++){
            std::cout << "*";
        }
        std::cout << std::endl;
        year += 20;
    }
    return 0;
}