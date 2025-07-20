#include <iostream>
#include <string>

int main(){
    std::cout << "Pattern A" << std::endl;
    for (int i = 1; i < 11; i++){
        for (int j = 0; j < i; j++){
            std::cout << "+";
        }
        std::cout << std::endl;
    }
    std::cout << "Pattern B" << std::endl;
    for (int i = 10; i > 0; i--){
        for (int j = i; j > 0; j--){
            std::cout << "+";
        }
        std::cout << std::endl;
    }

    return 0;
}