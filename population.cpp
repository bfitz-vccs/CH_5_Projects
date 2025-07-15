#include <iostream>
#include <cmath>

int main(){

    int days;
    float rate;
    int population;
    std::cout << "Please enter in the starting population: ";
    std::cin >> population;
    std::cout << "Please enter in the average daily percentage increase: ";
    std::cin >> rate;
    std::cout << "Please enter in the number of days: ";
    std::cin >> days;

    if (population < 2){
        std::cout << "Invalid starting population option." << std::endl;
    }
    else if (rate < 0){
        std::cout << "Invalid percentage increase option." << std::endl;
    }
    else if (days < 1){
        std::cout << "Invalid days option." << std::endl;
    }
    else{
        for (int i = 0; i < days+1; i++){
            int population_2 = population * pow((1 + (rate / 100)), i);
            std::cout << "Day " << i+1 << " population: " << population_2 << std::endl;
        }
    }

    return 0;
}