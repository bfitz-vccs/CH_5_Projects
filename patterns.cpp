#include <iostream>
#include <string>

int main(){
    int count = 0;
    while (count < 10){
        for (int i = 0; i < count; i++){
            std::cout << "*";
        }
        std::cout << std::endl;
        count++;
    }
    while (count > 0){
        for (int i = count; i > 0; i--){
            std::cout << "*";
        }
        std::cout << std::endl;
        count--;
    }

    return 0;
}